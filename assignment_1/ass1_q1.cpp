/*
?? **Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example:**
Input: nums = [2,7,11,15], target = 9
Output0 [0,1]

**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1][

*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> sol(int *arr,int n,int key)
{
	vector<int> index;
	int sum = 0;
	cout<<"output:";
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			sum = arr[i]+arr[j];
			if(sum==key)
			{
				index.push_back(i);
				index.push_back(j);
				return index;
			}
		}
	}
}
int main()
{
	int n,i,key;
	cout<<"enter the size of array:";
	cin>>n;
	int *arr = new int[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the key sum:";
	cin>>key;
	vector<int> index = sol(arr,n,key);
	cout << "Output:[" <<index[0] << ", " << index[1] << "]" << endl;
    delete []arr;
}
