/*
Question 6
Given a non-empty array of integers nums, every element appears twice except
for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only
constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(4);
	int ans =0;
	for(int i=0;i<nums.size();i++)
	{
		ans = ans^nums[i];
	}
	cout<<ans;
}
