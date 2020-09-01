class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        sort(A.begin(),A.end());
        string ans="";
        do{
            int hours=A[0]*10+A[1];
            int min=A[2]*10+A[3];
            string hs;
            string ms;
            if(hours<=9){
                hs="0"+to_string(hours);
            }
            else{
                hs=to_string(hours);
            }
            if(min<=9){
                ms="0"+to_string(min);
            }
            else{
                ms=to_string(min);
            }
            string temp=hs+ms;
            if(hours<24 && min<60){
                if(ans=="" || ans<temp){
                    ans=temp;
                }
            }
            
        }while(next_permutation(A.begin(),A.end()));
        if(ans=="")
            return ans;
        return ans.substr(0,2)+":"+ans.substr(2,4);
    }
};
