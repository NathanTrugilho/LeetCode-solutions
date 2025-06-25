#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        set<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == key)
            {
                for (int j = i - k; j <= i + k; j++)
                {   
                    if (j >= 0 && j < nums.size())
                    {
                        result.insert(j);
                    }
                    
                }   
            }
        }

        vector<int> v(result.begin(), result.end());

        return v;
    }
};

int main(){
    Solution s;

    vector<int> nums = {3,4,9,1,3,9,5};

    vector<int> resp = s.findKDistantIndices(nums, 9, 1); 

    for(int i : resp){
        cout << i << endl;
    }
}