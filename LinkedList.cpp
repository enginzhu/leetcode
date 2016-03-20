//
//  LinkedList.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/20.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "LinkedList.hpp"


void ListNode::insert(int value) {
    if (this->next == NULL) {
        this->next = new ListNode(value);
    } else {
        this->next->insert(value);
    }
}

LinkedList::LinkedList(vector<int> &list) {
    vector<int>::const_iterator iter;
    for (iter = list.cbegin(); iter != list.cend(); iter++) {
        if (iter == list.cbegin()) {
            this->head = new ListNode(*iter);
        } else {
            this->head->insert(*iter);
        }
    }
}

void LinkedList::print() {
    ListNode* cursor = this->head;
    while (cursor != NULL) {
        std::cout << cursor->val << " ";
        cursor = cursor->next;
    }
    std::cout << std::endl;
}