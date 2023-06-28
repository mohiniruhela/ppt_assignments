/*
Question 1
Given an integer array nums of length n and an integer target, find three integers
in nums such that the sum is closest to the target.
Return the sum of the three integers.

You may assume that each input would have exactly one solution.

Example 1:
Input: nums = [-1,2,1,-4], target = 1
Output: 2

Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int closest_sum(vector<int> num,int target)
{
	sort(num.begin(),num.end());
	int csum=INT_MAX;
	int min_diff=INT_MAX;
	for(int i=0;i<num.size();i++)
	{
		int l=i+1;
		int r=num.size()-1;
	
		while(l<r)
		{
			int sum = num[i]+num[l]+num[r];
			int diff = sum-target;
			if(diff<min_diff)
			{
				min_diff = diff;
	            csum = sum;
			}
			if(diff<min_diff)
			{
				l++;
			}
			else
			{
				r--;
			}
		}
	
		
	}	return csum;
}
int main()
{
	vector<int> num;
	num.push_back(-1);
	num.push_back(2);
	num.push_back(4);
	num.push_back(1);
	int target = 1;
	int output=closest_sum(num,target);
	cout<<"output:"<<output;

}
