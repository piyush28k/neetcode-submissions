class Solution {
public:

    int find(int i){
        int cnt = 0;

        while(i!=0){
            i=i&(i-1);
            cnt++;
        }

        return cnt;
    }

    vector<int> countBits(int n) {
        vector<int>ans;

        for(int i=0;i<=n;i++){
            ans.push_back(find(i));
        }
        return ans;
    }
};
