#include<iostream>
using namespace std;

class demo
{
	private:
		int a,b;
	public:
		demo(){
			cout<<"default!"<<endl;
		}
		demo(int x,int y)
		{
			a = x;
			b = y;
		}
		void display(void)
		{
			cout<<"a : "<<a<<endl;
			cout<<"b : "<<b<<endl;
		}
//		demo operator +(demo obj)
//		{
//			demo temp;
//			temp.a=a+obj.a;
//			temp.b=b+obj.b;
//			return temp;
//		}
        friend demo operator +(demo &obj1, demo &obj2);
};
demo operator +(demo &obj1, demo &obj2)
{
	demo temp;
	temp.a=obj1.a+obj2.a;
	temp.b=obj1.b+obj2.b;
	return temp;
}
int main(){
	demo obj1(10,20), obj2(30,40), obj3;
	obj3 = obj1 + obj2;
	obj3.display();
	
	
	return 0;
}
