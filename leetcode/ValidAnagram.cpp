//
//  ValidAnagram.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/4.
//  Copyright © 2016年 shane. All rights reserved.
//

//  ------------------------------------------------
//
//    Given two strings s and t, write a function to determine if t is an anagram of s.
//
//    For example,
//    s = "anagram", t = "nagaram", return true.
//    s = "rat", t = "car", return false.
//
//  ------------------------------------------------

#include "ValidAnagram.hpp"


bool ValidAnagram::isAnagram(string s,string t) {
    if (s.size() != t.size()) {
        return false;
    }
    bool result = true;
    string::size_type i;
    for (i = 0; i < s.size(); i++) {
        string::size_type index = t.find(s.at(i));
        if (index == -1) {
            result = false;
            break;
        }
        t.erase(index,1);
    }
    return result;
}
