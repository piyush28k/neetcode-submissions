class Solution {
public:
    int trap(vector<int>& heights) {
        int ans = 0;

        int lmax=heights[0], rmax=heights[heights.size()-1];
        int l=0,r=heights.size()-1;

        while(l<r){
            if(lmax<=rmax){
                l++;
                lmax=max(lmax,heights[l]);
                ans+=(lmax-heights[l]);
            }else{
                r--;
                rmax=max(rmax,heights[r]);
                ans+=(rmax-heights[r]);
            }
        }

        return ans;
    }
};
