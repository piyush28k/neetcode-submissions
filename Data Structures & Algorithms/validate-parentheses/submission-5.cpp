class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(auto it:s){
            if(it=='(' || it=='{' || it=='['){
                st.push(it);
            }else if( !st.empty() && (it==')' || it=='}' || it==']')){
                if(it==')' && st.top()=='(') st.pop();
                else if(it==']' && st.top()=='[') st.pop();
                else if(it=='}' && st.top()=='{') st.pop();
                else st.push(it);
            }else return false;
        }
        cout<<st.size();
        return (st.empty())? true: false;
    }
};
