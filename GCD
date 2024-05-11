//2- GCD(Euclid’s algorithm using only subtractions - consective integer checking algorithm.)
#include <iostream>
using namespace std;
void gcd(int num1 ,int num2)
{
    int remd;
        // Algorithm to find GCD using sub
    while (num2 > 0) //traditional way can use num1
    {
                // Assign firstNum to remainder
        remd = num1; 
        // Keep subtracting the second number from the remainder until it's non-negative
        while (remd - num2 >= 0) 
        {
            remd -= num2;
        }
        //save new values by swwaping
        num1 = num2;
        num2 = remd;
    }
    cout << "GCD = " << num1 << endl;
}
int main() 
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
gcd(num1,num2);
    return 0;
}

//2-Normal GCD :
#include<iostream>
using namespace std;
void gcd(int num1 ,int num2)
{
    int r;
    while(num2>0)
{
r = num1 % num2;
num1 = num2;
num2 = r;
}
cout<<"GCD = "<< num1<<endl;
}
int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
gcd(num1,num2);
    return 0;
}

//2- GCD  CONSECUTIVE INTEGER CHECKING ALGORITHM
//Step 1. Assign the value of min{m,n} to t    
//Step 2. Divide m by t. If the remainder of this division is 0, 
//go to Step 3; otherwise go to Step 4.    
//Step 3. Divide n by t. If the remainder of this division is 0, 
//return the value of t as the answer and stop; otherwise, proceed to Step 4.   
// Step 4. Decrease the value of t by 1. Go to Step 2
#include<iostream>
using namespace std;

int ConsecutiveIntegerChecking(int m, int n) {
    int t = min(m, n); // Step 1

    while (t > 0) {
        if (m % t == 0 && n % t == 0) // Step 2 and Step 3
            break;
else  t--; // Step 4
    }

    return t;
}

int main() {
    int m, n;

    cout << "Enter two non-negative integers m and n: ";
    cin >> m >> n;

    int result = ConsecutiveIntegerChecking(m, n);

    cout << "Greatest common divisor of " << m << " and " << n << " is: " << result << endl;

    return 0;
}
