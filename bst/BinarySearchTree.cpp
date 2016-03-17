//
//  BinarySearchTree.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/14.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "BinarySearchTree.hpp"

void TreeNode::insert(int value) {
    if (value < this->val) {
        if (this->left == NULL) {
            this->left = new TreeNode(value);
        } else {
            this->left->insert(value);
        }
    } else if (value > this->val) {
        if (this->right == NULL) {
            this->right = new TreeNode(value);
        } else {
            this->right->insert(value);
        }
    }
}

TreeNode* TreeNode::find(int value) {
    if (value < this->val) {
        if (this->left == NULL) {
            return NULL;
        } else {
            return this->left->find(value);
        }
    } else if (value > this->val) {
        if (this->right == NULL) {
            return NULL;
        } else {
            return this->right->find(value);
        }
    } else {
        return this;
    }
}

BinarySearchTree::BinarySearchTree() {}

void BinarySearchTree::insert(int value) {
    if (this->root == NULL) {
        this->root = new TreeNode(value);
        return;
    }
    this->root->insert(value);
}

TreeNode* BinarySearchTree::find(int value) {
    if (this->root == NULL) {
        return NULL;
    }
    return this->root->find(value);
}
