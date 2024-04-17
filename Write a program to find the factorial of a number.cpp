#include <iostream>
using namespace std;


// 2 Write a program to find the factorial of a number. 
int main() {
    int n;

    int fact= 1;

    cout << "Enter a postive integer: ";
    cin >> n; 

    if (n < 0)
    {
        cout << "Error!";

    }
    else{
        for(int i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        cout << "factorial of " << n <<  " = " << fact; 

     }
     return 0; 

}
