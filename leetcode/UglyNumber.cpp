//
//  UglyNumber.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/4/4.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "UglyNumber.hpp"


bool UglyNumber::isUgly(int num) {
    if (num == 1) {
        return true;
    }
    if (num == 0) {
        return false;
    }
    while (num % 2 == 0) {
        num /= 2;
    }
    while (num % 3 == 0) {
        num /= 3;
    }
    while (num % 5 == 0) {
        num /= 5;
    }
    return num == 1;
}