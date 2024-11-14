#include<iostream>
using namespace std;

class simplecalculator
{
	protected:
	    float a;
	    float b;
	public:
		void input();
		void show();
};
void simplecalculator :: input()
{
	cout<<"Enter the first number  : ";
	cin>>a;
	cout<<"Enter the second number : ";
	cin>>b;
}
void simplecalculator :: show()
{
	cout<<"The is + of two numbers are : "<<a+b<<endl;
	cout<<"The is - of two numbers are : "<<a-b<<endl;
	cout<<"The is * of two numbers are : "<<a*b<<endl;
	cout<<"The is / of two numbers are : "<<a/b<<endl;
}
class scientificcalculator:public simplecalculator
{
	public:
		void calculate();
};
void scientificcalculator :: calculate()
{
	int sin=a+b;
	int cos=a-b;
	cout<<"The sin value of two number : "<<sin<<endl;
	cout<<"The cos value of two number : "<<cos<<endl;
}
class Hybired:public scientificcalculator 
{
	public:
		void finalshow();
};
void Hybired :: finalshow()
{
    show();
	calculate();
}
int main(){
	Hybired obj;
	obj.input();
	obj.finalshow();
	
	return 0;
}
