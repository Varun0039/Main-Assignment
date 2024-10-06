#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
	friend myfun(A &obj) ;
};
		myfun(A &obj)
		{
			cout<<"Enter A:";
			cin>>obj.a;
			cout<<"Enter B:";
			cin>>obj.b;
			cout<<"A is:"<<obj.a<<endl;
			cout<<"B is:"<<obj.b<<endl;
			obj.a=obj.a+obj.b;
			obj.b=obj.a-obj.b;
			obj.a=obj.a-obj.b;
			cout<<"After swapping values of a is:"<<obj.a<<endl;
			cout<<"After swapping values of b is:"<<obj.b<<endl;
		}
main()
{
	A obj;
	myfun(obj);
}
