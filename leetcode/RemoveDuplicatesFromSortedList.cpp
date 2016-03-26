#include "RemoveDuplicatesFromSortedList.hpp"

ListNode* RemoveDuplicatesFromSortedList::deleteDuplicates(ListNode* head) {
    map<int,int>table;
    map<int,int>::iterator it;

    ListNode* pre = NULL;
    ListNode* cur = head;
    while (cur != NULL) {
        int value = cur->val;
        it = table.find(value);
        if (it != table.end()) {
            if (pre) {
                pre->next = cur->next;
                cur = cur->next;
            }
        } else {
            table[value] = value;
            pre = cur;
            cur = cur->next;
        }
    }
    return head;
}