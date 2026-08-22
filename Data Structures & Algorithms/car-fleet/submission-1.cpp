class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>arr;
        int n = speed.size();
        stack<double>st;

        for(int i=0;i<n;i++){
            arr.push_back({position[i],speed[i]});
        }

        sort(arr.begin(), arr.end());

        for(int i=n-1;i>=0;i--){
            double d = target - arr[i].first;
            double cal = (d/arr[i].second);

            if(st.empty() || st.top()<cal) st.push(cal);
            

        }

        return st.size();
    }
};