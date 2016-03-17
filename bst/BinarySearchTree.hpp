//
//  BinarySearchTree.hpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/14.
//  Copyright © 2016年 shane. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using std::vector;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
    void insert(int value);
    TreeNode* find(int value);
};

class BinarySearchTree {
public:
    BinarySearchTree();
    TreeNode* root;
    void insert(int value);
    TreeNode* find(int value);
};

#endif /* BinarySearchTree_hpp */
