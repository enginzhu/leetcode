//
//  main.cpp
//  leetcode
//
//  Created by 朱晓杨 on 16/3/3.
//  Copyright © 2016年 shane. All rights reserved.
//

#include "BinarySearchTree.hpp"

#include "ValidAnagram.hpp"
#include "ExcelSheetColumnNumber.hpp"
#include "ContainsDuplicate.hpp"
#include "MajorityElement.hpp"
#include "BinarySearchTree.hpp"
#include "LCAofBST.hpp"
#include "HammingWeight.hpp"


int main(int argc, const char * argv[]) {
    /* Valid Anagram */
    /*
    string s("aacc");
    string t("ccac");
    bool anagram = ValidAnagram::isAnagram(s, t);
    std::cout << anagram << std::endl;
     */
    
    /* ExcelSheetColumnNumber */
    /*string s("ABC");
    int number = ExcelSheetColumnNumber::titleToNumber(s);
    std::cout << number << std::endl;
    return 0;
     */
    
    /* Contains Duplicate */
    /*
    vector<int> list{1,2,3,4,5,6,7,8};
    bool duplicate = ContainsDuplicate::containsDuplicate(list);
    std::cout << duplicate << std::endl;
     */
    
    /* Majority Element */
    /*
    vector<int> list{1,2,3,2,2};
    int majority = MajorityElement::majorityElement(list);
    std:: cout << majority << std::endl;
    */
    
    /* LCAofBST */
    /*
    vector<int> list{6,2,8,0,4,7,9,3,5};
    BinarySearchTree* tree = new BinarySearchTree();
    vector<int>::const_iterator iter;
    for (iter = list.cbegin(); iter!=list.cend(); iter++) {
        tree->insert(*iter);
    }
    
    TreeNode* node1 = tree->find(2);
    TreeNode* node2 = tree->find(8);
    TreeNode* lca = LCAofBST::lowestCommonAncestor(tree->root, node1, node2);
    std::cout << lca->val << std::endl;
     */
    
    /* Hamming Weight */
    uint32_t n = 65535;
    bitset<32> b(n);
    int bit = HammingWeight::hammingWeight(n);
    std::cout << "binary: " << b << "\n" << "number of 1: " << bit << std::endl;
}
