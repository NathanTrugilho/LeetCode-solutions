#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int min = 0;
        int subseq = 1;

        for(int iter = 0; iter < nums.size(); iter++)
        {
            if (nums[iter] - nums[min] > k)
            {
                subseq++;
                min = iter;
            }
        }
        return subseq;
    }
};