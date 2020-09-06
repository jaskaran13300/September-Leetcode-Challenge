class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int row=A.size();
        int col;
        if(row){
            col=A[0].size();
        }
        int ans=0;
        for(int i=-row;i<row;i++){
            for(int j=-col;j<col;j++){
                ans=max(ans,func(A,B,i,j));
            }
        }
        return ans;
    }
    
    int func(vector<vector<int>>& a, vector<vector<int>>& b,int ro,int co){
        int row=b.size();
        int col;
        if(row){
            col=b[0].size();
        }
        int c=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i+ro<0 || i+ro>=row || j+co<0 || j+co>=col){
                    continue;
                }
                if(a[i+ro][j+co]+b[i][j]==2){
                    c++;
                }
            }
        }
        return c;
    }
    
};
