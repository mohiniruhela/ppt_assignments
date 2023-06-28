/*
<aside>
?? **Question 5**
You are given a large integer represented as an integer array digits, where each
digits[i] is the ith digit of the integer. The digits are ordered from most significant
to least significant in left-to-right order. The large integer does not contain any
leading 0's.

Increment the large integer by one and return the resulting array of digits.

**Example 1:**
Input: digits = [1,2,3]
Output: [1,2,4]

**Explanation:** The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

</aside>
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> rev(vector<int> v)
{
	int s=0;
	int e=v.size()-1;
	while(s<e)
	{
		swap(v[s++],v[e--]);
	}
  return v;
}
void add(vector<int> &arr)
{
	int i = arr.size()-1;
	int carry =1;
	vector<int> ans;
	while(i>=0)
	{
		int val = arr[i];
		int sum = val + carry;
		carry = sum/10;
		sum = sum %10;
		ans.push_back(sum);
		i--;
	}

	while(carry!=0)
	{
		int sum = carry;
		carry = sum/10;
		sum = sum %10;
		ans.push_back(sum);
	}
	arr =  rev(ans);
	
}

int main()
{	
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	add(arr);
	cout<<"Output:";
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
