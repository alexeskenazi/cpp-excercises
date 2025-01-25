#pragma once
#include <string>
#include <stack>
#include <iostream>
#include <cassert>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 

class BinaryTreePreorderTraversal {
    public:
        
        vector<int> preorderTraversal(TreeNode* root) {
            TreeNode* current = root;
            vector<int> output;
            if(root!=nullptr){
                preorderHelper(root, output);
            }
            return output; 
        }


        void preorderHelper(TreeNode* root, vector<int>& output) {
            if(root!=nullptr){
                output.push_back(root->val);
                preorderHelper(root->left, output);
                preorderHelper(root->right, output);
            }
            return;
        }

        void checks() {
           
        }
};