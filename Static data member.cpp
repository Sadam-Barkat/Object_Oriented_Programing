#include<iostream>
using namespace std;

class demo
{
	private:
		int a,b;
		static int c;
	public:
		void setdata(int x , int y)
		{
			a=x;
			b=y;
			c=c+1;
		}
		void getdata(void)
		{
		cout<<"a : "<<a<<endl;
		cout<<"b : "<<b<<endl;
		cout<<"c : "<<c<<endl;
		}
};
int demo :: c;

int main(){
	demo obj1,obj2;
	obj1.setdata(1,2);
	obj2.setdata(4,5);
	obj2.getdata();
	obj1.getdata();
	
	
	return 0;	
}
