class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,1);

        for(int i=n-1;i>=0;i--){
            int maxi = 1;
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]) maxi=max(maxi,1+dp[j]);
            }
                dp[i]=maxi;
        }

        return *max_element(dp.begin(), dp.end());
    }
};
