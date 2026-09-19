class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mpp;
        int i=0;
        int ans=0;

        for(int j=0;j<s.size();j++){
            while(mpp.find(s[j])!=mpp.end()){
                mpp[s[i]]--;
                if(mpp[s[i]]==0) mpp.erase(s[i]);
                i++;
            }
            mpp[s[j]]++;
            ans=max(ans,j-i+1);
        }

        return ans;
    }
};
