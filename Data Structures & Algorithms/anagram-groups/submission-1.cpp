class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;

        vector<string>temp=strs;

        for(auto& it:temp){
            sort(it.begin(),it.end());
        }
        
        map<string,vector<int>>mpp;
        for(int i=0;i<temp.size();i++){
            mpp[temp[i]].push_back(i);
        }


        for(auto [str,arr]:mpp){
            vector<string>curr;
            for(auto it:arr){
                curr.push_back(strs[it]);
            }
            ans.push_back(curr);
        }
        return ans;
    }
};
