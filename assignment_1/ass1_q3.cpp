#include<iostream>
using namespace std;
int search(int *arr,int l,int h,int key)
{
	int flag;
	int mid;
	while(l<=h)
	{
		mid = l+((h-l)/2);
		if(arr[mid]==key)
		{
			flag =1;
			break;
		}
		else if(arr[mid]>key)
		{
			h=mid-1;
		}
		else
		{
			l = mid+1;
		}
	}
	return l;
	
}
int main()
{
	int n,l,h,mid,key;
	cout<<"enter the size:";
	cin>>n;
	cout<<"enter the elements:";
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the key:";
	cin>>key;
	l=0;h=n-1;
	int x=search(arr,l,h,key);
	cout<<"x:"<<x;
}
