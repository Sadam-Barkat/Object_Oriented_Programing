#include<iostream>
using namespace std;

class A
{
	private:
		int a;
		int b;
	public:
		void setdata(int a,int b)
		{
		  this->a = a;
		  this->b = b;
		}
		void getdata(void)
		{
			cout<<"The value of a is : "<<a<<endl;
			cout<<"The value of b is : "<<b<<endl;
		}
};

int main(){
	//this is a keword which is pointer and which points to the object which invokes the member function
	A a;
	a.setdata(4,5);
	a.getdata();
	
	return 0;
}
