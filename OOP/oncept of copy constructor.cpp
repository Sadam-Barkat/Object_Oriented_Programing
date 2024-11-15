#include<iostream>
using namespace std;

class demo
{
	private:
		int a,b;
	public:
		demo(int x, int y)
		{
		     a=x;
		     b=y;
		}
		demo(demo &obj)
		{
			a=obj.a;
		    b=obj.b;
		}
		void display(void)
		{
			cout<<a<<endl;
			cout<<b<<endl;
		}
};

int main(){
	demo obj2(1,2);
    demo obj1=obj2;
    obj1.display();
	return 0;

}
