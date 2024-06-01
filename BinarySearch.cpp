//binary search :
//1-iterative array of number :
int binS(int arr[],int high,int k,int low = 0)
{
	
	while(low<=high)
	{
		int m = low+(high-low)/2;
		if(arr[m]==k)
			return m;
		else if(arr[m]>k)
			high = m-1;
		else
			low = m+1;
	}
	return -1;
}
//2-iterative string :
#include <iostream>
#include <string>

using namespace std;

int binS(const string& str, char k, int high, int low = 0) {
    while (low <= high) {
    int m = low+(high-low)/2;
        if (str[m] == k)
            return m;
        else if (str[m] > k)
            high = m - 1;
        else
            low = m + 1;
    }
    return -1;
}

int main() {
    string str = "abcdefghijklmnopqrstuvwxyz";
    int size = str.length();
    char key = 'g';
    int index = binS(str, key, size - 1);
    
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}

//3-recursive array of number :
int binSR(int arr[],int high,int k,int low = 0)
{
	if(low<=high)
	{
		int m = low+(high-low)/2;
		if(arr[m]==k)
			return m;
		else if(arr[m]>k)
			return binSR(arr,m-1,k,low);
		else
			return binSR(arr,high,k,m+1);
	}
	return -1;
}
//4-recursive using string :
#include <iostream>
#include <string>

using namespace std;

int binSR(string str, char k, int high, int low = 0) {
    if (low <= high) {
      int m = low+(high-low)/2;
        if (str[m] == k)
            return m;
        else if (str[m] > k)
            return binSR(str, k, m - 1, low);
        else
            return binSR(str, k, high, m + 1);
    }
    return -1;
}

int main() {
    string str = "abcdefghijklmnopqrstuvwxyz";
    int size = str.length();
    char key = 'g';
    int index = binSR(str, key, size - 1);
    
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}
