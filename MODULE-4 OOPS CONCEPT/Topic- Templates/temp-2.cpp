#include<iostream>
using namespace std;
template <typename T>
T myfun(int size)
{
	T a[size];
	int i,j,temp;
	for (i=0;i<size;i++)
        {
            cout<<"Enter element :";
            cin>>a[i];
        }
        
    for (i=0;i<size;i++)
	{
        for (j=i+1;j<size;j++)
	    {
	       if(a[i]>a[j])
        	{
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for (i=0;i<size;i++)
        {
            cout<<"ascending order:"<<a[i]<<endl;
        }
    for (i=0;i<size;i++)
        {
            cout<<"Enter element :";
            cin>>a[i];
        }
        
    for (i=0;i<size;i++)
	{
        for (j=i+1;j<size;j++)
	    {
	       if(a[i]<a[j])
        	{
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for (i=0;i<size;i++)
        {
            cout<<"descending order:"<<a[i]<<endl;
        }
}
main()
{
	myfun<int>(4);	
}

