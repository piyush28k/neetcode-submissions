class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto it:s){
            if((it>='a' && it<='z') || (it>='A' && it<='Z') || (it>='0' && it<='9') ) str+=tolower(it);
        }
        cout<<str;
        for(int i=0;i<str.size()/2;i++){
            if(str[i]!=str[str.size()-1-i]) return false;
        }
        return true;
    }
};
