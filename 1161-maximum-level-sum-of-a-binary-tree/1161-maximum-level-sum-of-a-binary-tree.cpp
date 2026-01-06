/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {

        int maxi = INT_MIN;
        int level = 1;
        int ansLevel = 1;
        if(root==NULL) return -1;

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            int size = q.size();
            int levelSum = 0;
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                levelSum += temp->val;

            }
             if (levelSum > maxi) {
                maxi = levelSum;
                ansLevel = level;
            }
            level++;
           

        }
        return ansLevel;
        
    }
};