class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size()==0){
            return false;
        }
        string temp=s+s;
        temp=temp.substr(1,temp.size()-2);
        cout<<temp;
        if(temp.find(s)!=-1){
            return true;
        }
        return false;
    }
};
