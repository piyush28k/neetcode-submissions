class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int ans= 0;
        int min = INT_MAX;

        for(int it:prices){
            if(min>it) min=it;
            else ans=max(ans,it-min);
        }
        return ans;
    }
};
