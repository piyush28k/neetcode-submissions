class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        map<char,int>mpp;
        int l=0,r=0;

        while(r<s.size()){
            if(mpp.count(s[r])==0){
                mpp[s[r]]++;
                ans=max(ans,(int)mpp.size());
            }else{
                while(mpp.count(s[r])==1){
                    mpp[s[l]]--;
                    if(mpp[s[l]]==0) mpp.erase(s[l]);
                    l++;
                }
                mpp[s[r]]++;
                ans=max(ans,(int)mpp.size());
            }
            r++;
        }

        for(auto [a,b]:mpp){
            cout<<a<<" ";
        }

        return ans;
    }
};
