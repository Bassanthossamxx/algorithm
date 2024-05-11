//Design an algorithm to find all the common elements in two sorted lists of numbers :
#include<iostream>
using namespace std;
int main() 
{
int arr1[] = {2,5,5,5};
int arr2[] = {2,2,3,5,5,7 };
int size1 = sizeof(arr1) / sizeof(arr1[0]);
int size2 = sizeof(arr2) / sizeof(arr2[0]);
int i=0, j=0;
while (i < size1 && j < size2) {
if (arr1[i] == arr2[j]) {
cout << arr1[i] << " ";
i++;
j++;
}
else if (arr1[i] > arr2[j]) {
j++;
}
else
i++;
}
}
