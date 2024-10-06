#include<iostream>
using namespace std;

class base{
	
	public:
		int vpublic;
    protected:
    	int vprotected;
    private:
    	int vprivate;
    	
    public:
	    base()
		{
			vpublic=1;
			vprivate=2;
			vprotected=3;
		}
		
		displaybase()
		{
			cout<<"Base Class"<<endl;
			cout<<"Public is:"<<vpublic<<endl;
			cout<<"Protected is:"<<vprotected<<endl;
			cout<<"Private is:"<<vprivate<<endl;
		}	
};

class Derived:public base{
	public:
		displayderived()
		{
			cout<<"Derived Class"<<endl;
			cout<<"Public is:"<<vpublic<<endl;
			cout<<"Protected is:"<<vprotected<<endl;
		}
};
main()
{
	Derived obj;
	obj.displaybase();
	obj.displayderived();
}
