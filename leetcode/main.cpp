//
//  main.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/3.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "ValidAnagram.hpp"
#include "ExcelSheetColumnNumber.hpp"
#include "ContainsDuplicate.hpp"
#include "MajorityElement.hpp"


int main(int argc, const char * argv[]) {
    /*
    string s("aacc");
    string t("ccac");
    bool anagram = ValidAnagram::isAnagram(s, t);
    std::cout << anagram << std::endl;
     */
    
    /*string s("ABC");
    int number = ExcelSheetColumnNumber::titleToNumber(s);
    std::cout << number << std::endl;
    return 0;
     */
    
    /*
    vector<int> list{1,2,3,4,5,6,7,8};
    bool duplicate = ContainsDuplicate::containsDuplicate(list);
    std::cout << duplicate << std::endl;
     */
    
    vector<int> list{1,2,3,2,2};
    int majority = MajorityElement::majorityElement(list);
    std:: cout << majority << std::endl;
}
