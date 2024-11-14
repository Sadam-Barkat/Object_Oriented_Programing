/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?---->Multiple inheritance
    Q2. Which mode of Inheritance are you using?---->public simplecalculator , public scientificcalculator
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator
{
	private:
		int a,b;
	public:
		void getdata()
		{
	       cout<<"Enter the value of a : ";
		   cin>>a;
		   cout<<"Enter the value of b : ";
		   cin>>b;	
		}
		void perfoamcalculation(void)
		{
			cout<<"The value of a+b is : "<<a+b<<endl;
			cout<<"The value of a-b is : "<<a-b<<endl;
			cout<<"The value of a*b is : "<<a*b<<endl;
			cout<<"The value of a/b is : "<<a/b<<endl;
		}
};
class scientificcalculator
{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<"Enter the value of a : ";
			cin>>a;
			cout<<"Enter the value of b : ";
			cin>>b;
		}
		void perfoamcalculation(void)
		{
			cout<<"The value of sin(a+b) is : "<<sin(a+b)<<endl;
			cout<<"The value of cos(a+b) is : "<<cos(a+b)<<endl;
			cout<<"The value of tan(a+b) is : "<<tan(a+b)<<endl;
		}
};
class Hybired : public  simplecalculator, public scientificcalculator
{
	
};
int main(){
	Hybired obj;
	cout<<"This is a simple calculator!"<<endl;
	obj.simplecalculator::getdata();
	obj.simplecalculator::perfoamcalculation();
	cout<<endl;
	cout<<"This is a scientific calculator!"<<endl;
	obj.scientificcalculator::getdata();
	obj.scientificcalculator::perfoamcalculation();
	return 0;
}
