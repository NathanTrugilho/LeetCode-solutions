#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int totalGroups = (s.size() + k - 1) / k;  
        vector<string> v(totalGroups);

        for(int i = 0; i < s.size(); i++)
        {
            v[i/k] += s[i];
        }

        while (v.back().size() < k) { //O back pega a referencia do ultimo termo do
            v.back() += fill;          //vetor de string e o size calcula o tamanho dele
        }
        
        return v;
    }
};

int main()
{
    Solution s;
    vector<string> result = s.divideString("abcdefghij", 3, 'x');

    for (const string& str : result)
    {
        cout << str << endl;
    }

    return 0;
}