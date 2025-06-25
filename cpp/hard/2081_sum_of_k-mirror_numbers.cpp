#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    static bool isPalindrome(long long number){
        string n_str = to_string(number);        

        for (int i = 0; i < n_str.size()/2 + 1; i++)
        {
            if (n_str[i] != n_str[n_str.size() - i - 1])
            {
                return false;
            }
        }
        return true;
    }

    static long long toKBase(long long number, int base){

        

    }

    long long kMirror(int k, int n) {
        



    }
};

int main(){
    long long numero = 123444444321;

    cout << Solution::isPalindrome(numero);
    
    return 0;
}