#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) 
    {
        if (x < 0)
            return false;

        int original = x;
        int reverse = 0;

        while(x > 0)
        {
            int aux = x % 10;
            reverse *= 10;
            reverse += aux;
            x /= 10;
        }
        
        return original == reverse;
    }
};

int main()
{
    Solution s;
    int x = 1122332211;

    if (s.isPalindrome(x))
    {
        std::cout << "é palíndromo!" << std::endl;
    } else {
         std::cout << "não é palíndromo!" << std::endl;
    }
    
    return 0;
}