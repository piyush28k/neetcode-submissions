class Solution {
public:


    // int find(string text1, string text2, int i, int j, vector<vector<int>>&dp){
    //     if(i>=text1.size() || j>=text2.size()) return 0;

    //     if(dp[i][j]!=-1) return dp[i][j];

    //     if(text1[i]==text2[j]){
    //         return dp[i][j]= 1+find(text1, text2, i+1,j+1,dp);
    //     }else{
    //         return dp[i][j]=max(find(text1, text2, i+1,j,dp),find(text1, text2, i,j+1,dp));
    //     }
    // }

    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1));
        // return find(text1, text2, 0,0,dp);

        for(int i=0;i<dp.size();i++){
            dp[i][0]=0;
        }
        for(int i=0;i<dp[0].size();i++){
            dp[0][i]=0;
        }

        for(int i=1;i<dp.size();i++){
            for(int j=1;j<dp[0].size();j++){
                 if(text1[i-1]==text2[j-1]){
                    dp[i][j]= 1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[dp.size()-1][dp[0].size()-1];
    }
};
