class Solution {
public:

    void find(vector<int>& nums, int i, vector<vector<int>>& ans, vector<int>& temp){
        if(i==nums.size()) {
            ans.push_back(temp);
            return;
        }


        find(nums,i+1,ans,temp);
        temp.push_back(nums[i]);
        find(nums,i+1,ans,temp);
        temp.pop_back();

        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        
        find(nums,0,ans,temp);

        return ans;
    }
};
