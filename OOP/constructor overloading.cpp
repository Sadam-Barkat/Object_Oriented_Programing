#include<iostream>
using namespace std;

class Overload
{
	private:
		int res;
	public:
		Overload(int x, int y)
		{
			res = x*y;
		}
		Overload(int x, int y, int z)
		{
			res = x+y+z;
		}
		int result()
		{
			return res;
		}
};
int main(){
	Overload o1(2, 3);
	Overload o2(8, 9, 10);
	cout<<"The result of Multiplication is :"<<o1.result()<<endl;
	cout<<"The result of addition is       :"<<o2.result()<<endl;
	
	return 0;
}
