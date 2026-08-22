class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        int n = nums.size();

        for(int i = 0; i < n - 2; i++) {

            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int t = -nums[i];

            int l = i + 1;
            int r = n - 1;

            while(l < r) {

                int curr = nums[l] + nums[r];

                if(curr == t) {
                    ans.push_back({nums[i], nums[l], nums[r]});

                    l++;
                    r--;

                    while(l < r && nums[l] == nums[l - 1])
                        l++;

                    while(l < r && r<n-1 && nums[r] == nums[r + 1])
                        r++;
                }
                else if(curr < t) {
                    l++;
                }
                else {
                    r--;
                }
            }
        }

        return ans;
    }
};
