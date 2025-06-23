#include <iostream>
#include <unordered_set>
#include <vector>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> values(nums.begin(), nums.end());
        int max_sequence = 0;
        
        for (int num : values) //num não é o índice!!
        {
            if (!values.count(num - 1)) //Se o antecessor não estiver no set, então ele é início da sequencia
            {
                int sequence = 1;
                int number = num + 1;

                while (values.count(number))
                {
                    sequence++;
                    number++;
                }
    
                if (sequence > max_sequence)
                    max_sequence = sequence;
                
            }   
        }
        return max_sequence;
    }
};