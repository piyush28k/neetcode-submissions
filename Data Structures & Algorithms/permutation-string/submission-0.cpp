class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        string temp="";
        int i=0,j=0;
        while(j<s2.size()){
            temp+=s2[j];
            if(temp.size()==s1.size()){
                string curr = temp;
                sort(curr.begin(),curr.end());

                if(curr==s1) return true;

                string neu = temp.substr(1);
                temp = neu;
            }

            j++;
        }
        return false;
    }
};
