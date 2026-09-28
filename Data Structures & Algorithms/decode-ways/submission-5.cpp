class Solution {
public:
    int numDecodings(string s) {
        int dp[101];
        int n=s.size();
        if(s[0]=='0') return 0;
        if(s[n-1]!='0') dp[n-1]=1;
        dp[n]=1;

        for(int i=n-2;i>=0;i--){
            if(s[i]=='0'){
                dp[i]=0;
                continue;
            }
            int a = dp[i+1];
            if(stoi(s.substr(i,2))<=26) a+=dp[i+2]; 
            dp[i]=a;

        }

        return dp[0];
    }
};
