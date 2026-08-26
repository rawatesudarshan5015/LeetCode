class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int count = s1.size();
        for(auto x:s1){
            mp1[x]++;
        }
        mp2=mp1;
        int i=0;

        while(i<s2.size() && mp2.find(s2[i])==mp2.end()){
            i++;
        }
        int j=i;

        while(j<s2.size() && i<s2.size()){

            if(mp2.find(s2[j])!=mp2.end()){

                if(mp2[s2[j]]<=0){
                    count++;
                    mp2[s2[i]]++;
                    i++; 
                    // j++;
                }else{
                mp2[s2[j]]--;
                count--;
                j++;
                }
                if(count==0) return true;
            }else{
                mp2=mp1;
                i=j+1;
                j=i;                                        
                count=s1.size();
               
            }
        }
        if(count!=0) return false;



        return true;

    }
};