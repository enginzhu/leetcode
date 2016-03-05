//
//  ExcelSheetColumnNumber.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/4.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "ExcelSheetColumnNumber.hpp"

int ExcelSheetColumnNumber::titleToNumber(string s) {
    string::size_type index, length = s.size();
    int total = 0;
    for (index = 0; index < length; index++) {
        char ch = s.at(index);
        int place = (int)ch - 64;
        total += place * pow(26, (length - index - 1));
    }
    return total;
}