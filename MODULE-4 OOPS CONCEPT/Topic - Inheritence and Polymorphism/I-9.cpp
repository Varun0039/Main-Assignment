#include<iostream>
using namespace std;

class Image{
	int height, width;
	public:
		Image(int h=0, int w=0)
		{
			height=h;
			width=w;
		}
		Image operator + (Image &obj)
		{
			Image result;
			result.height=height+obj.height;
			result.width=width+obj.width;
			return result;
		}
		void print()
		{
			cout<<height<<"/"<<width<<endl;
		}
};
main()
{
	Image I1(100,20), I2(200,30);
	Image I3=I1+I2;
	I3.print();
	
}
