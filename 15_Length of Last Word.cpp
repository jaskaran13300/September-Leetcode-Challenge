class Solution {
public:
    int lengthOfLastWord(string s) {
        int last=s.size()-1;
        while(last>=0 && s[last]==' '){
            last--;
        }
        int c=0;
        while(last>=0 && s[last]!=' '){
            last--;
            c++;
        }
        return c;
    }
};
