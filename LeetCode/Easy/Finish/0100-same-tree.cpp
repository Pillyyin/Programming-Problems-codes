//  Runtime 0ms(100%), Memory 12.90MB(41.29%)
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
    bool inorder(TreeNode* node_p, TreeNode* node_q){
        if(node_p == nullptr && node_q == nullptr){
            return true ;
        }else if(node_p == nullptr || node_q == nullptr){
            return false ;
        }else if(node_p->val != node_q->val){
            return false ;
        }else{
            bool l = inorder(node_p->left, node_q->left) ;
            bool r = inorder(node_p->right, node_q->right) ;

            return l && r ;
        }
    
    } 

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return inorder(p, q) ;
    }
};