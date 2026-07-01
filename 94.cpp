#include <bits/stdc++.h>
#include <vector>
class Solution {
  public:
    void inorder(Treenode* root, vector<int>& resutl){
      if(root == nullptr) return;
      inorder(root-> left, result);
      result.push_back(root);
      inorder(root->right, result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int> result;
      inorder(root, result);
      return result;
    }
};
