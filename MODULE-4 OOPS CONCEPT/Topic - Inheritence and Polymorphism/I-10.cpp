#include<iostream>
using namespace std;

class Image{
	string string1, string2;
	public:
		Image(string s1="")
		{
			string1=s1;
			
		}
		Image operator + (Image &obj)
		{
			Image result;
			result.string1=string1+obj.string1;
			
			return result;
		}
		void print()
		{
			cout<<string1<<endl;
		}
};
main()
{
	Image I1("varun"), I2("gg");
	Image I3=I1+I2;
	I3.print();
	
}
