
#include<iostream>
using namespace std;
template <typename T>
T myfun(T a,T b)
{
	cout<<"before swapping value of a is"<<a<<endl;
	cout<<"before swapping value of b is"<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"After swapping value of a is :"<<a<<endl;
	cout<<"After swapping value of b is :"<<b<<endl;
}
main()
{
	myfun<int>(8,9);

	
}
