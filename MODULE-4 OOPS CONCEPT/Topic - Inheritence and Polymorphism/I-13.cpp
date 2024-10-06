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
			if(obj.a>obj.b)
			{
				cout<<"A is max"<<endl;
			}
			else{
				cout<<"B is max"<<endl;
			}
		}
main()
{
	A obj;
	myfun(obj);
}
