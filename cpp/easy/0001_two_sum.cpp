#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/*class Solution { //Solução Brute force
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int y = i + 1; y < nums.size(); y++) //tem que ser i + 1 pra não permitir usar o mesmo elemento mais de uma vez
            {
                if ((nums[i] + nums[y]) == target)
                    return {i,y};
            }
        }
        return{};
    }
};*/

class Solution { //Solução mais rápida do tabela hash
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> map; //valor do num, índice

        for (int i = 0; i < nums.size(); i++)
        {
            int remaining = target - nums[i]; //numero que falta pra dar o target
            if(map.count(remaining)) //1 se tiver a chave lá
                return {map[remaining], i};

            map.insert({nums[i], i});
        }
        return{};
    }
};