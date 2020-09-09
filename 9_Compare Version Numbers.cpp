class Solution {
public:
    int compareVersion(string version1, string version2) {
        string temp="";
        queue<int>q1;
        queue<int>q2;
        for(int i=0;i<version1.size();i++){
            temp="";
            while(i<version1.size() && version1[i]!='.'){
                temp=temp+version1[i];
                i++;
            }
            q1.push(stoi(temp));
        }
        
        for(int i=0;i<version2.size();i++){
            temp="";
            while(i<version2.size() && version2[i]!='.'){
                temp=temp+version2[i];
                i++;
            }
            q2.push(stoi(temp));
        }
        while(q1.size() || q2.size()){
            int a,b;
            if(!q1.empty()){
                a=q1.front();
                q1.pop();
            }
            else{
                a=0;
            }
            if(!q2.empty()){
                b=q2.front();
                q2.pop();
            }
            else{
                b=0;
            }
            if(a==b){
                continue;
            }
            if(a<b){
                return -1;
            }
            if(a>b){
                return 1;
            }
        }
        return 0;
    }
};
