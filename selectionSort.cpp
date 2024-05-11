//1-selection sort to sort numbers (iterative) :
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        // Find the index of the minimum element from i+1 to end of array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the element at index i
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//2-selection sort to sort array of chars (iterative) :
#include <iostream>
using namespace std;

void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        // Find the index of the minimum character from i+1 to end of array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum character with the character at index i
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() 
{
    char arr[] = {'z', 'a', 'b', 'x', 'c'};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//3-selection sort to sort string (iterative) :
#include <iostream>
using namespace std;

void selectionSort(string& str) {
    int n = str.length();

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        // Find the index of the minimum character from i+1 to end of string
        for (int j = i + 1; j < n; ++j) {
            if (str[j] < str[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum character with the character at index i
        if (minIndex != i) {
            swap(str[i], str[minIndex]);
        }
    }
}

int main() {
    string str = "benha";

    cout << "Original string: " << str << endl;

    selectionSort(str);

    cout << "Sorted string: " << str << endl;

    return 0;
}

//4- selection sort(recursive)  to sort string 
#include <iostream>
using namespace std;
//find small number index
int findMinIndex(string& str, int s) 
{
    int minindex = s;
    for (int i = s + 1; i < str.length(); ++i)
     {
        if (str[i] < str[minindex])
         {
            minindex = i;
        }
    }
    //return the index of smallest number
    return minindex;
}
//we make recursive using start and string "start change every time I call it"
void selectionSort(string& str, int start) 
{
    //end of loop if I am at the end of array of chars >> index=length-1
    if (start == str.length() - 1)
     {
        return;
    }
//find the small number to start loop
    int minindex = findMinIndex(str, start);
//if minindex = start so string "array of char Sorted"
    if (minindex != start) 
    {
        //if not we swap the smallest with the start
        swap(str[start], str[minindex]);
    }
//recursive loop ::
    selectionSort(str, start + 1);
}

int main() {
    string str = "Benha";

    cout << "Original string: " << str << endl;

    selectionSort(str, 0);

    cout << "Sorted string: " << str << endl;

    return 0;
}

//5-selection sort(recursive)  to sort array of numbers
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int start = 0) {
    //  if start reaches the last index, end of loop
    if (start == n - 1) {
        return;
    }

    // Find the min index in the unsorted part of the array
    int minIndex = start;
    for (int i = start + 1; i < n; ++i) 
    {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the min element with the first element of the unsorted part
    swap(arr[start], arr[minIndex]);

    // Recursive loop ::
    selectionSort(arr, n, start + 1);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//6- selection sort(recursive)  to sort array of chars
#include <iostream>
using namespace std;

void selectionSort(char arr[], int n, int start = 0) {
    // Base case: if start reaches the last index, return
    if (start == n - 1) {
        return;
    }

    // Find the minimum character's index in the unsorted part of the array
    int minIndex = start;
    for (int i = start + 1; i < n; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the minimum character with the first character of the unsorted part
    swap(arr[start], arr[minIndex]);

    // Recur for the next index
    selectionSort(arr, n, start + 1);
}

int main() {
    char arr[] = {'z', 'a', 'b', 'x', 'c'};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
