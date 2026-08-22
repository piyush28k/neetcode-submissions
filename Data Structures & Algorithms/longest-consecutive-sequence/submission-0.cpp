class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int ans = 1;

        for(auto [it,f]:mpp){
            if(mpp.find(it-1)==mpp.end()){
                int curr = it;
                int cnt = 0;
                while(mpp.find(curr)!=mpp.end()){
                    curr++;
                    cnt++;
                }
                ans=max(ans,cnt);
            }
        }

        return ans;
    }
};
