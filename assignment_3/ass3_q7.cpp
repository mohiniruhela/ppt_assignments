/*
Question 7
You are given an inclusive range [lower, upper] and a sorted unique integer array
nums, where all elements are within the inclusive range.

A number x is considered missing if x is in the range [lower, upper] and x is not in
nums.

Return the shortest sorted list of ranges that exactly covers all the missing
numbers. That is, no element of nums is included in any of the ranges, and each
missing number is covered by one of the ranges.

Example 1:
Input: nums = [0,1,3,50,75], lower = 0, upper = 99
Output: [[2,2],[4,49],[51,74],[76,99]]

Explanation: The ranges are:
[2,2]
[4,49]
[51,74]
[76,99]
*/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > findMissingRanges(vector<int>& nums,int lower,int upper)
{
    vector<vector<int> > result;
    
    // Handle the lower bound
    if (lower < nums[0]) 
	{
        result.push_back({lower,nums[0]-1});
    }
    
    // Handle the middle ranges
    for (int i=1;i<nums.size();i++) 
	{
        if (nums[i]-nums[i-1]>1) 
		{
            result.push_back({nums[i-1]+1,nums[i]-1});
        }
    }
    
    // Handle the upper bound
    if (upper>nums[nums.size()-1])
	{
        result.push_back({nums[nums.size()-1]+1,upper});
    }    
    return result;
}

int main() {
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(50);
    nums.push_back(75);
    int lower = 0;
    int upper = 99;
    
    vector<vector<int> >result=findMissingRanges(nums,lower,upper);
    
    // Print the result
    for (int i=0;i<result.size();i++)
	{
        cout<<"["<<result[i][0]<<","<<result[i][1]<<"] ";
    }
    
    return 0;
}

