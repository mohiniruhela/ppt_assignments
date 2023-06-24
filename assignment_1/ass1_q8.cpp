/* **Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

**Example 1:**
Input: nums = [1,2,2,4]
Output: [2,3]
*/

#include<iostream>
using namespace std;
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
	int ans;
    for(i=1;i<n;i++)
    {
    	if(arr[i]==arr[i-1])
    	{
    		 ans = arr[i];
    		 break;
		}
    	
    }	
    
	arr2[0]=ans;
	arr2[1]=arr2[0]+1;
	cout<<"Output:";
	for(i=0;i<2;i++)
	{
		cout<<arr2[i]<<"\t";
	}
	
	delete[] arr;
    delete[] arr2;
	
}
