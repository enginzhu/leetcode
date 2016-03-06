//
//  ContainsDuplicate.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/5.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "ContainsDuplicate.hpp"

bool ContainsDuplicate::containsDuplicate(vector<int>& nums) {
    bool duplicate = false;
    map<int,int>table;
    map<int,int>::iterator it;
    
    vector<int>::size_type length = nums.size();
    for (vector<int>::size_type index = 0; index < length; index++) {
        int value = nums[index];
        it = table.find(value);
        if (it != table.end()) {
            duplicate = true;
            break;
        }
        table[value] = value;
    }
    return duplicate;
}