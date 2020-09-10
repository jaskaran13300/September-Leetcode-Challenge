class Solution {
public:
    int pairs(string str1, string str2, int size){
        int f1[11] = { 0 };
        int f2[11] = { 0 };
        int i, c = 0;
		
        for (i = 0; i < size; i++)
          f1[str1[i] - '0']++;
        
        for (i = 0; i < size; i++)
          f2[str2[i] - '0']++;
        
        for (i = 0; i < 11; i++)
          c += (min(f1[i], f2[i]));
        
        return c;
    }
    string getHint(string secret, string guess) {
        int a=0,b,n = secret.size();
        b=pairs(secret,guess,n);
        
        for(int i=0;i<n;i++) 
            if(secret[i]==guess[i])
                a++;
        string res=to_string(a)+'A'+to_string(b-a)+'B'; 
        return res;
    }
};
