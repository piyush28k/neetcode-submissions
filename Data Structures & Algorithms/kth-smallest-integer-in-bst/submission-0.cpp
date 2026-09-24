/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void find(TreeNode* root, int k, int& curr, int& ans){
        if(!root) return;


        find(root->left,k,curr,ans);
        curr+=1;
        if(curr==k) ans = root->val;
        find(root->right,k,curr, ans);

        return;

    }

    int kthSmallest(TreeNode* root, int k) {  
        int ans = 0, curr=0;  
        find(root,k,curr,ans);
        return ans; 
    }
};
