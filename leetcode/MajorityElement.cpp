//
//  MajorityElement.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/7.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "MajorityElement.hpp"

int MajorityElement::majorityElement(vector<int>& nums) {
    map<int,int>dict;
    vector<int>::size_type len = nums.size();
    int majority;
    
    for (int i = 0; i < len; i++) {
        int element = nums[i];
        dict[element]++;
        if (dict[element] > len / 2) {
            majority = element;
            break;
        }
    }
    return majority;
}