//
//  LCAofBST.hpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/17.
//  Copyright © 2016年 shane. All rights reserved.
//

#ifndef LCAofBST_hpp
#define LCAofBST_hpp

#include <stdio.h>
#include "BinarySearchTree.hpp"


class LCAofBST {
public:
    static TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p, TreeNode* q);
};

#endif /* LCAofBST_hpp */
