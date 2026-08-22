class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre;
        vector<int>suf;

        int temp = 1;
        for(auto it:nums){
            temp*=it;
            pre.push_back(temp);
        }

        reverse(nums.begin(), nums.end());
        temp = 1;
        for(auto it:nums){
            temp*=it;
            suf.push_back(temp);
        }

        reverse(nums.begin(), nums.end());
        reverse(suf.begin(), suf.end());
        
        
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(i==0) ans.push_back(suf[i+1]);
            else if(i==nums.size()-1) ans.push_back(pre[i-1]);
            else{
                ans.push_back((pre[i-1]*suf[i+1]));
            }
        }

        return ans;
    }
};
     
//1  2  8  48  p
//48 48 24 6   s
