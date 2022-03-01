//https://leetcode.com/problems/validate-binary-search-tree/
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
// Recursive Inorder Traversal
// class Solution {
// private:
//     TreeNode* prev = nullptr;
    
// public:
//     bool isValidBST(TreeNode* root) {
//         return inorder(root);
//     }
    
//     bool inorder(TreeNode* root){
//         if(root == nullptr)
//             return true;
//         if(!inorder(root->left))
//             return false;
//         if(prev != nullptr && root->val <= prev->val)
//             return false;
//         prev = root;
//         return inorder(root->right);
//     }
// };

// Recursive Traversal with Valid Range
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validateBST(root, INT_MIN, INT_MAX);
    }
    
    bool validateBST(TreeNode* root, int minVal, int maxVal){
        if(root == NULL) return true;
        if(root->val >= maxVal || root->val <= minVal) return false;
        return validateBST(root->left, minVal, root->val) && validateBST(root->right, root->val, maxVal);
    }

};