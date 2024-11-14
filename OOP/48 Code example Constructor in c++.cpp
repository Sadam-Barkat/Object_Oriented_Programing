/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
#include<iostream>
using namespace std;

class Base1
{
	private:
		int data1;
	public:
		Base1(int i)
		{
			data1=i;
			cout<<"This is a perametrize Base1 constructor!"<<endl;
		}
		void printdata1(void)
		{
			cout<<"The value of Base1 is : "<<data1<<endl;
		}
};
class Base2
{
	private:
		int data2;
	public:
		Base2(int i)
		{
			data2=i;
			cout<<"This is a perametrize Base2 constructor!"<<endl;
		}
		void printdata2(void)
		{
			cout<<"The value of Base2 is : "<<data2<<endl;
		}
};
class Drived : public Base1,public Base2
{
	private:
		int datad1,datad2;
	public:
		Drived(int a,int b,int c,int d):Base1(a),Base2(b)
		{
			datad1=c;
			datad2=d;
		}
		void display(void)
		{
			cout<<"The value of Drive datad1 is : "<<datad1<<endl;
			cout<<"The value of Drive datad2 is : "<<datad2<<endl;
		}
};
int main(){
	Drived obj(1,2,3,4);
	obj.Base1::printdata1();
	obj.Base2::printdata2();
	obj.display();
	return 0;
}
