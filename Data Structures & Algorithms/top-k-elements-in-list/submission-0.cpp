class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int,int>mpp;
        for(int it:nums){
            mpp[it]++;
        }

        vector<pair<int,int>>arr(mpp.begin(), mpp.end());

        sort(arr.begin(),arr.end(),[](auto& a, auto& b){
            return a.second > b.second;
        });

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};
