//
//  LinkedList.hpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/20.
//  Copyright © 2016年 shane. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using std::vector;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
    void insert(int value);
};


class LinkedList {
public:
    ListNode* head;
    LinkedList();
    LinkedList(vector<int> &list);
    void insert(int value);
    void print();
};

#endif /* LinkedList_hpp */
