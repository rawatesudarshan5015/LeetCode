class Solution {
public:
    int countCollisions(string d) {
        int collision = 0;
        int count = 0;
        for(int i=0;i<d.size();i++){
            if((d[i]=='R' && d[i+1]=='L')){
                collision +=2;
                d[i+1]='S';
                if(count!=0){
                    collision+=count;
                    count=0;
                }
            }else if(d[i]=='S' && d[i+1]=='L'){
                collision +=1;
                d[i+1]='S';
            }else if(d[i]=='R' && d[i+1]=='S'){
                collision +=1;
                d[i+1]='S';
                 if(count!=0){
                    collision+=count;
                    count=0;
                }
            }else if(d[i]=='R' && d[i+1]=='R'){
                count++;
            }
        }
        return collision;
    }
};