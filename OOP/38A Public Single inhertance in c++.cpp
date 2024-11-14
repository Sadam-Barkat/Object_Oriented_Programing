// A drived class with one Base class is called single inheritance
#include<iostream>
using namespace std;

class Base{

	private://It is not inheritable
	    int data1;
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
};
void Base :: setdata()
{
	data1 = 10;
	data2 = 20;
}
int Base :: getdata1()
{
	return data1;
}
int Base :: getdata2()
{
	return data2;
}

class Drived : public Base//class is being drived publicaly
{
	private:
		int data3;
	public:
		void process();
		void display();
};
void Drived :: process()
{
	data3 = data2*getdata1();
}
void Drived :: display()
{
	cout<<"The value of data 1 is : "<<getdata1()<<endl;
	cout<<"The value of data 2 is : "<<data2<<endl;
	cout<<"The value of data 3 is : "<<data3<<endl;
}

int main(){
	Drived objd;
	objd.setdata();
	objd.process();
	objd.display();
	
	return 0;
}
