#include<iostream>
using namespace std;

class Employee
{
	private:
		int id;
		int salary;
	public:
		void setid(void){
			salary = 122;
			cout<<"Enter the id :"<<endl;
			cin>>id;
		}
		void getid(void){
			cout<<"The id of employee is "<<id<<endl;
		}
	
};

int main(){
//	Employee sadam,haris;
//	sadam.setid();
//	sadam.getid();
    Employee fb[4];
    for(int i=0; i<4; i++){
    	fb[i].setid();
    	fb[i].getid();
	}
	
	return 0; 
}