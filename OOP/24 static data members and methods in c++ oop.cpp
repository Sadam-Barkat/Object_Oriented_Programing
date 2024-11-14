#include<iostream>
using namespace std;

class Employee
{
	private:
		int id;
		static int count;//static variable ik aysa variable hay jo class say jur jata hay
		// isliay isko class variable bhi khtay hay
	public:
	    void setdata(void){
	    	cout<<"Enter the id:"<<endl;
	    	cin>>id;	    
			count++;	
		}
		void getdata(void){
			cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
		}
		static void getCount(void){
			//cout<<id;  throws an error
			cout<<"The value of count is "<<count<<endl;
		}
};
//count is the static data member of the class employee
int Employee :: count;//by default count zero say hi start hota hay

int main(){
	Employee sadam,hussain,salman,haris;
	
	sadam.setdata(); 
	sadam.getdata();
	Employee::getCount();
	
	hussain.setdata();
	hussain.getdata();
	Employee::getCount();
	
	salman.setdata();
	salman.getdata();
	Employee::getCount();
	
	haris.setdata();
	haris.getdata();
	Employee::getCount();
	
	
	return 0;
}
