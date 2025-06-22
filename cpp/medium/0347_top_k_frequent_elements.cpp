#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> frequency; //num, times
        vector<int> v;

        for (int i = 0; i < nums.size(); i++)
        {
            if (frequency.count(nums[i])) //1 se tiver, 0 se não
            {
                frequency[nums[i]]++;
            } else {
                frequency.insert({nums[i], 1});
            }
        }
        

        while (k > 0)
        {
            int max_freq = 0;
            int freq_value;

            for (const auto&[value, times] : frequency)
            {
                if (times >= max_freq)
                {
                    max_freq = times;
                    freq_value = value;
                }
            }

            v.insert(v.end(), freq_value);
            frequency.erase(freq_value);
            k--;
        }
        return v;
    }
};