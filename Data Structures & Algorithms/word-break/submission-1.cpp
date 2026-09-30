class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st={wordDict.begin(),wordDict.end()};
        int n=s.size();
        
        vector<int>dp(n+1);
        dp[n]=1;

        for(int i=n;i>=0;i--){
            for(auto it:wordDict){
                int l=it.size();
                if(i+l>n) continue;
                string sub = s.substr(i,l);

                if(st.find(sub)!=st.end()){
                    dp[i]=max(dp[i],dp[i+l]);
                }
            }
        }

        return dp[0];
    }
};
