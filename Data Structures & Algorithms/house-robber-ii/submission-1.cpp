class Solution {
public:

    int find(vector<int>& nums){
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp(n);

        dp[0]=nums[0],dp[1]=max(nums[0], nums[1]);

        for(int i=2;i<n;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }

        return max(dp[n-1],dp[n-2]);
    }

    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        if(n==0) return nums[0];
        vector<int> nums1(nums.begin(), nums.end() - 1);
        vector<int> nums2(nums.begin()+1, nums.end());

        return max(find(nums1),find(nums2));

    }
};
