#include <iostream>
#include <vector>
#define ARR_LEN(x,len) len = sizeof(x)/sizeof(x[0])
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;
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
    Solution solution1;
    vector<int> nums,result;
    int num[4] = {7,9,11,15},target = 16;
    int n,i,j;
    ARR_LEN(num,n);
    for(int i=0;i<n;i++)
    {
        nums.push_back(num[i]);    
    }    

    result = solution1.twoSum(nums,target);

    for(int i=0;i<result.size();i++)//size()容器中实际数据个数 
    {
        cout << result[i] <<",";
    }
    cout << "结束" << endl;   
    return 0;
}