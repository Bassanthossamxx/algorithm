// inseartion sort ::
//1-inseartion sort iterative to sort array of numbers :
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Array after sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//1-inseartion sort iterative to sort array of chars :
#include <iostream>
using namespace std;

void insertionSort(char arr[], int n) {
    char key;
    int j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    char arr[] = {'b', 'a', 'd', 'c', 'e'};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Array after sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//3-inseartion sort iterative to sort string :
#include <iostream>
using namespace std;

void insertionSort(string& str) {
    int n = str.length();
    for (int i = 1; i < n; i++) {
        char key = str[i];
        int j = i - 1;
        while (j >= 0 && str[j] > key) {
            str[j + 1] = str[j];
            j = j - 1;
        }
        str[j + 1] = key;
    }
}

int main() {
    string str = "insertionsort";
    
    cout << "String before sorting: " << str << endl;

    insertionSort(str);

    cout << "String after sorting: " << str << endl;

    return 0;
}
