class Solution {
public:

    string finde(int i,string& s){
        int l=i,r=i;
        
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return s.substr(l+1,r-l-1);
    }
    string findo(int i,string& s){
        int l=i,r=i+1;
        
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }

        return s.substr(l+1,r-l-1);
    }

    string longestPalindrome(string s) {
        string ans = "";
        int maxi = 0;

        for(int i=0;i<s.size();i++){
            string e = finde(i,s);
            string o = findo(i,s);

            if(max(e.size(),o.size())<=maxi) continue;

            if(e.size()>o.size()){
                maxi=e.size();
                ans=e;
            }else{
                maxi=o.size();
                ans=o;
            }
        }

        return ans;
    }
};
