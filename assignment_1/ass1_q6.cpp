/* **Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

**Example 1:**
Input: nums = [1,2,3,1]

Output: true

*/
#include<iostream>
#include<algorithm>
using namespace std;
bool check_duplicate(int *arr,int n)
{
	sort(arr,arr+n);
    
    for (int i=1;i<n;i++)
	{
        if (arr[i] == arr[i-1])
		{
            return true; 
        }
    }
    
    return false;
}
int main()
{
	int n,i;
	cout<<"enter the size:";
	cin>>n;
	int *arr = new int[n];
	int *arr2 = new int[2];
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x = check_duplicate(arr,n);
    if(x==1){
    	cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	
	
}
