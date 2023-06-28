/*Question 8
Given an array of meeting time intervals where intervals[i] = [starti, endi],
determine if a person could attend all meetings.

Example 1:
Input: intervals = [[0,30],[5,10],[15,20]]
Output: false*/
#include<iostream>
using namespace std;
bool overlap(int **arr,int r)
{
	// Check for any overlaps
    for (int i = 1; i < r; i++) 
	{
        if (arr[i][0] < arr[i-1][1]) {
            // There is an overlap, person cannot attend all meetings
            return false;
        }
    }
    return true;
}
int main(){
	int r,c;
	cout<<"enter the row:";
	cin>>r;
	cout<<"enter the column:";
	cin>>c;
	int **arr = new int*[r];
	for(int i=0;i<r;i++)
	{
		arr[i]= new int[c];
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
			
		}
	}
       
    for (int i=0;i<r-1;i++)
	 {
        for (int j=0;j<c-i-1;j++) 
		{
            if (arr[j][0] > arr[j+1][0])
			 {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    int check = overlap(arr,r);
    if(check==0)
    {
    	cout<<"false";
	}
	else
	{
		cout<<"true";
	}
        
}
