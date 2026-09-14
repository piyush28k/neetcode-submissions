class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        int i=31;

        while(i--){
           if(n>>i & 1) cnt++;
        }

        return cnt;
    }
};
