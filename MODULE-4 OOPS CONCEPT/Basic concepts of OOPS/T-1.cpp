#include<iostream>
using namespace std;
     
class Myclass1
{
	public:
       int a,b;
	add()
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
		cout<<"Enter b:"<<endl;
		cin>>b;
		cout<<"Addition is :"<<a+b<<endl;	
	}
};
class Myclass2
{
	public:
		int a,b;
	sub()
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
		cout<<"Enter b:"<<endl;
		cin>>b;
		cout<<"sub is:"<<a-b<<endl;
	}
};
class Myclass3
{
	public:
		int a,b;
		mul()
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
		cout<<"Enter b:"<<endl;
		cin>>b;
		cout<<"mul is:"<<a*b<<endl;
	}
	
};
class Myclass4
{
	public:
		int a,b;
		div()
	{
		cout<<"Enter a:"<<endl;
		cin>>a;
		cout<<"Enter b:"<<endl;
		cin>>b;
		cout<<"div is:"<<a/b<<endl;
	}
};
class Myclass5
{
	public:
		int a,b;
		mod()
		{
		  cout<<"Enter a:"<<endl;
		  cin>>a;
		  cout<<"Enter b:"<<endl;
		  cin>>b;
		  cout<<"Modulos is:"<<a%b<<endl;
		}
};

main()
{
	Myclass1 obj1;
	obj1.add();
	Myclass2 obj2;
	obj2.sub();
	Myclass3 obj3;
	obj3.mul();
	Myclass4 obj4;
	obj4.div();
	Myclass5 obj5;
	obj5.mod();
}
