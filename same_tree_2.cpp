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
     bool isSameTree(TreeNode *p, TreeNode *q) {
         if (p == NULL || q == NULL) return (p == q);
         return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
     }
    
    // bool isSameTree(TreeNode *p, TreeNode *q) {
    //     vector<int> v1,v2;
    //     preordertraversal(p, v1);
    //     preordertraversal(q, v2);
    //     if(v1==v2) return true;
    //     return false;
    // }
    
    void preordertraversal(TreeNode* root, vector<int> &v){
        if(root==nullptr){
            v.push_back(-1);
            return;
        }
        else if(root!=NULL){
            v.push_back(root->val);
            preordertraversal(root->left, v);
            preordertraversal(root->right, v);
        }
        
    }
    
};
