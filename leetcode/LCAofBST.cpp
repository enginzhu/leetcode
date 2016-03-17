//
//  LCAofBST.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/17.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "LCAofBST.hpp"
#include "BinarySearchTree.hpp"

TreeNode* LCAofBST::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (p->val < root->val && q->val < root->val) {
        return lowestCommonAncestor(root->left, p, q);
    } else if (p->val > root->val && q->val > root->val) {
        return lowestCommonAncestor(root->right, p, q);
    } else {
        return root;
    }
}