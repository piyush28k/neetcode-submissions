class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;

        int ans = 0;
        while(l<r){
            int h=min(heights[l],heights[r]);
            int d=r-l;
            int vol = h*d;
            ans=max(ans, vol);
            if(heights[l]<heights[r]) l++;
            else if(heights[r]<heights[l]) r--;
            else{
                l++;
                r--;
            }

        }

        return ans;
    }
};
