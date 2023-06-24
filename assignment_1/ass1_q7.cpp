/* **Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative
 order of the nonzero elements.

Note that you must do this in-place without making a copy of the array.

**Example 1:**
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

*/
#include<iostream>
using namespace std;
void move_zeroes(int *arr,int n)
{
	int nonzero=0;
	for(int j=0;j<n;j++)
	{
		if(arr[j]!=0)
		{
			swap(arr[j],arr[nonzero++]);
		}
	}
}
int main()
{
	int n,i;
	cout<<"enter the size:";
	cin>>n;
	int *arr = new int[n];
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    move_zeroes(arr,n);
    cout<<"Output:";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	delete []arr;
}

