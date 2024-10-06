#include <iostream>
using namespace std;
inline multiply(int a, int b)
{
    return a*b;
}
inline cube(int x)
{
    return x*x*x;
}
int main() {
    int num1, num2;

    cout<<"Enter two integers to multiply: ";
    cin >> num1>>num2;
    cout<<"Multiplication  is: "<<multiply(num1, num2)<<endl;

    cout<<"Enter an integer to find its cube: ";
    cin>>num1;
    cout<<"Cube of"<< num1<<" is: "<<cube(num1)<<endl;
    return 0;
}

