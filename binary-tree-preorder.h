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
            
            TreeNode* root = new TreeNode(1);
            root->right = new TreeNode(2);
            root->right->left = new TreeNode(3);
            vector<int> expectedOutput = {1, 2, 3};
            vector<int> output = preorderTraversal(root);
            assert(output==expectedOutput);
            cout << "BinaryTreePreorderTraversal: test 1 passed." << endl;

            root = new TreeNode(1);
            expectedOutput = {1};
            output = preorderTraversal(root);
            assert(output==expectedOutput);
            cout << "BinaryTreePreorderTraversal: test 2 passed." << endl;
            
           
        }
};