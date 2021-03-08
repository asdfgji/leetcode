#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        for(i=0;i<nums.size()-1;i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                   return {i,j};
                }
            }
        }
        return {i,j};      
    }
};

int main()
{
    Solution Solution1;
    vector<int> nums ;
    int num[4] = {7,9,11,15},target = 9;
    
    Solution1.twoSum(nums,target);

    return 0;
}