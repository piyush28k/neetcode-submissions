class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m=matrix.size(),n=matrix[0].size();
        int i,j;
        int k=0;

        if(m==1 && n==1) return (matrix[0][0]==target) ? true:false;

        if(m>1){

            i=0,j=m-1;
            while(i<=j){
                int mid = (i+j)/2;
                if(matrix[mid][0]==target) return true;
                else if(matrix[mid][0] > target) j=mid-1;
                else i=mid+1;
            }
            k=j;
        }

        if(k<0) return false;
        cout<<k;

        if(n>1){

            i=0;j=n-1;

            while(i<=j){
                int mid = (i+j)/2;
                if(matrix[k][mid]==target) return true;
                else if(matrix[k][mid] > target) j=mid-1;
                else i=mid+1;
            }
        }
        return false;
    }
};
