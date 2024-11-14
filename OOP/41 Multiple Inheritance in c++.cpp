#include<iostream>
using namespace std;

class Base1
{
	protected:
		int data1;
	public:
		void setdata1(int);
};
void Base1 :: setdata1(int a)
{
	data1=a;
}

class Base2
{
	protected:
		int data2;
	public:
		void setdata2(int);
};
void Base2 :: setdata2(int a)
{
	data2=a;
}
class Drived : public Base1,public Base2
{
	public:
		void show();
};
void Drived :: show()
{
	cout<<"The value of Base1 is : "<<data1<<endl;
	cout<<"The value of Base2 is : "<<data2<<endl;
	cout<<"The sum of Base1 and Base2 is : "<<data1+data2<<endl;
}

int main(){
	Drived obj;
	obj.setdata1(1);
	obj.setdata2(2);
	obj.show();
	
	return 0;
}
//Note:
//In This case for drived class 
//1.data members of base classes are protected 
//2.functons like setdata(),getdata() etc are public
//3.and also show() public because it is its own class function 







