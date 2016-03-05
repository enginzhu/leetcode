//
//  main.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/3.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "ValidAnagram.hpp"
#include "ExcelSheetColumnNumber.hpp"


int main(int argc, const char * argv[]) {
    /*
    string s("aacc");
    string t("ccac");
    bool anagram = ValidAnagram::isAnagram(s, t);
    std::cout << anagram << std::endl;
     */
    
    string s("ABC");
    int number = ExcelSheetColumnNumber::titleToNumber(s);
    std::cout << number << std::endl;
    return 0;
}
