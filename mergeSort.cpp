//merge sort :
#include<iostream>
using namespace std;
// if arr is {2,3,8,9,1,4,5,7}  like presenation slide 12 
// [2,3,8,9]  [1,4,5,7]  the two sub array need to be merge
// for ex k=3 (0+7)/2  i=0  j=7
// l=0  m=4  t=0

//l<=k and j>=m
// 0    B[t] = arr[m]   B[0] = arr[4]    B[0] = 1      m=5   t=1    because arr[m] < arr[l]  will be true  1<2
// 1   B[t] = arr[l]   B[1] = arr[0]    B[1] = 2      l=1   t=2		because arr[l] < arr[m]  will be true  2<4
// 2    B[t] = arr[l]   B[2] = arr[1]    B[2] = 3      l=2   t=3	because arr[l] < arr[m]  will be true  3<4
// 3   B[t] = arr[m]   B[3] = arr[5]    B[3] = 4      m=6   t=4		because arr[m] < arr[l]  will be true  4<8
// 4   B[t] = arr[m]   B[4] = arr[6]    B[4] = 5      m=7   t=5		because arr[m] < arr[l]  will be true  5<8
// 5   B[t] = arr[m]   B[5] = arr[7]    B[5] = 7      m=8   t=6		because arr[m] < arr[l]  will be true  7<8

// l<=k  and j<m
// 6    B[t] = arr[l]   B[6] = arr[2]    B[6] = 8      l=3   t=7
// 7    B[t] = arr[l]   B[7] = arr[3]    B[7] = 9      l=4   t=8


// l>k and j<m   end the loop
// B = {1,2,3,4,5,7,8,9}   
// arr = {1,2,3,4,5,7,8,9}   

void merge(int arr[],int i,int k,int j)
{
	// for ex k=3  i=0  j=7
	int l=i;  // for ex l=0
	int m=k+1; // for ex m = 4
	int t=i;  // for ex t = 0
	int *B = new int[j];  // size of B = 7
	while ( (l<=k) || (m<=j) )
	{
		// when l be greater than the middle 
		if(l>k)
		{
			B[t] = arr[m];
			m++;
		}
		// mean the middle achieve to the end
		else if(m>j)
		{
			B[t] = arr[l];
			l++;
		}
		else if(arr[l]>arr[m])
		{
			B[t] = arr[m];
			m++;
		}
		else
		{
			B[t] = arr[l];
			l++;
		}
		t++;
	}
	for(int t=i;t<=j;t++)
	{
		arr[t]=B[t];
	}


}

void mergesort(int arr[],int s,int e)
{
	if(s>=e)
		return;
	int mid = (s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	merge(arr,s,mid,e);
}
void main()
{
	int arr[]={15,4,7,11,2,10,14,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,0,size-1);

	for(int i=0;i<size;i++)
		cout<<arr[i]<<"  ";

	system("pause");
}
