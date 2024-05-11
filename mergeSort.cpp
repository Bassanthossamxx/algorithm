//merge sort :
//1- merge Sort for array of numbers :
#include<iostream>
using namespace std; 
void merge(int arr[], int l, int m, int r)//m = l + (r - l) / 2;       
{
	int i, j, k;
	int n1 = m - l + 1;// First subarray is arr[l..m]                    
	int n2 = r - m;// Second subarray is arr[m+1..r]                     
	int *L=new int[n1], *R=new int[n2];
	
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = j = 0; 
	k = l;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}


void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
        
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}



void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}
int main()
{

		int arr[] = { 60,10,20,5,60,70 };
		int n = sizeof(arr) / sizeof(arr[0]);//24/4=6

		mergeSort(arr, 0, n-1);
		print(arr,n);
	return 0;

	}
//2- Merge sort for string :
#include <iostream>
#include <string>

using namespace std;

void merge(string &arr, int i, int k, int j) {
    int l = i;
    int m = k + 1;
    int t = i;
    string B;

    while (l <= k || m <= j) {
        if (l > k) {
            B += arr[m];
            m++;
        } else if (m > j) {
            B += arr[l];
            l++;
        } else if (arr[l] > arr[m]) {
            B += arr[m];
            m++;
        } else {
            B += arr[l];
            l++;
        }
        t++;
    }

    for (int t = i; t <= j; t++) {
        arr[t] = B[t - i];
    }
}

void mergesort(string &arr, int s, int e) {
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int main() {
    string arr = "cbaedgf";
    int size = arr.length();
    mergesort(arr, 0, size - 1);

    cout << arr;

    return 0;
}
//3- merge Sort for array of chars :
#include <iostream>
#include <cstring>

using namespace std;

void merge(char arr[], int i, int k, int j) {
    int l = i;
    int m = k + 1;
    int t = i;
    char *B = new char[j - i + 1]; // size of B = j - i + 1

    while (l <= k || m <= j) {
        if (l > k) {
            B[t - i] = arr[m];
            m++;
        } else if (m > j) {
            B[t - i] = arr[l];
            l++;
        } else if (arr[l] > arr[m]) {
            B[t - i] = arr[m];
            m++;
        } else {
            B[t - i] = arr[l];
            l++;
        }
        t++;
    }

    for (int t = i; t <= j; t++) {
        arr[t] = B[t - i];
    }

    delete[] B;
}

void mergesort(char arr[], int s, int e) {
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int main() {
    char arr[] = "cbaedgf";
    int size = strlen(arr);
    mergesort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
        cout << arr[i];

    return 0;
}

