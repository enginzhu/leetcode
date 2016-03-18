//
//  HammingWeight.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/18.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "HammingWeight.hpp"

int HammingWeight::hammingWeight(uint32_t n) {
    uint32_t count = 0;
    for (uint32_t i = 0; i < 32; i++) {
        int bitGetter = 1 << i;
        int bit = (bitGetter & n) >> i;
        if (bit == 1) {
            count++;
        }
    }
    return count;
}
