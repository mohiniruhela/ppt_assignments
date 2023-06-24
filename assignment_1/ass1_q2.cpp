/* <aside>
?? **Q2.** Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be
 changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

- Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums
 are not important as well as the size of nums.
- Return k.

**Example :**
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]

**Explanation:** Your function should return k = 2, with the first two elements of nums being 2. It does not matter what you leave beyond the returned k (hence they are underscores)[

*/
#include<iostream>
using namespace std;
int remove_ele(int *arr ,int key,int n) 
{
    int k=0; 

    for(int i=0;i<n;i++) {
        if (arr[i]!=key)
		{
            arr[k]=arr[i];
            k++;
        }
    }

    return k;
}
int main()
{
	int n,i,key;
	cout<<"enter the size of array:";
	cin>>n;
	cout<<"enter the elements:"<<endl;
	int *arr = new int[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the key value:";
	cin>>key;
	int k=remove_ele(arr,key,n);

    cout << "Output: " << k << ", nums = [";
    for (int i=0;i<k;i++) 
	{
        cout<<arr[i];
        if (i<k-1) 
		{
            cout<<",";
        }
    }
    cout << ",_,_]" <<endl;
    delete []arr;

}
