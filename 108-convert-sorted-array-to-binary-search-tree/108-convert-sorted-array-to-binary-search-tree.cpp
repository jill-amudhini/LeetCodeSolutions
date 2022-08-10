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
    vector<int> numsarray;
    
    TreeNode* BSTHelper(int l,int r)
    {
        if(r<l)
            return NULL;
        
        int mid=(l+r)/2;
        
        TreeNode* root = new TreeNode(numsarray[mid], BSTHelper(l,mid-1), BSTHelper(mid+1,r));
        
        return root;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        numsarray=nums;
        return BSTHelper(0,nums.size()-1);
    }
};