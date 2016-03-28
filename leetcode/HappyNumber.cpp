#include "HappyNumber.hpp"


bool HappyNumber::isHappy(int n) {
    if (n == 1) return true;
    
    std::map<int,bool> m;
    m[n] = true;
    
    while (n != 1) {
        int total = 0;
        while (n > 0) {
            total += (n % 10) * (n % 10);
            n = n / 10;
        }
        n = total;
        std::cout << n << std::endl;
        if (m.find(n) != m.end()) {
            return false;
        }
        m[n] = true;
    }
    return true;
}
