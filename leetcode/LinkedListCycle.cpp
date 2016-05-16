//
//  LinkedListCycle.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/5/15.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "LinkedListCycle.hpp"
#include <map>

using namespace std;

bool LinkedListCycle::hasCycle(ListNode *head) {
    map<ListNode*, bool> table;
    map<ListNode*, bool>::iterator it;
    bool cycleFlag = false;
    
    while (head != NULL) {
        it = table.find(head);
        if (it != table.end()) {
            cycleFlag = true;
            break;
        } else {
            table[head] = true;
        }
        head = head->next;
    }
    
    return cycleFlag;
}