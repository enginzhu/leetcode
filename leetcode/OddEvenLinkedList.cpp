//
//  OddEvenLinkedList.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/20.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "OddEvenLinkedList.hpp"


ListNode* OddEvenLinkedList::oddEvenList(ListNode* head) {
    if (head == NULL) {
        return head;
    }
    if (head->next == NULL) {
        return head;
    }
    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;
    
    while (odd && even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}