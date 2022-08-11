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
    vector<int> elements;
    void getElement(TreeNode* root)
    {
        if(root==NULL)
        {
            return ;
        }
        elements.push_back(root->val);
        getElement(root->left);
        getElement(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        elements.clear();
        getElement(root);
        return elements;
    }
};