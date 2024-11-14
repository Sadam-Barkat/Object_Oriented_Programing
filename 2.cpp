#include<iostream>
using namespace std;

class Myclass
{
	public:
		string name;
		int age;
		float cgpa;		
};

int main(){
	Myclass object1;
	object1.name="sadam";
	object1.age=22;
	object1.cgpa=3.5;
	
	
	Myclass object2;
	object2.name="Haris";
	object2.age=20;
	object2.cgpa=3.9;
	
	cout<<"Name of object:"<<object1.name<<endl;
	cout<<"Age of object:"<<object1.age<<endl;
	cout<<"CGPA of object:"<<object1.cgpa<<endl;
	
	cout<<endl;
	
	cout<<"Name of object:"<<object2.name<<endl;
	cout<<"Age of object:"<<object2.age<<endl;
	cout<<"CGPA of object:"<<object2.cgpa<<endl;

	return 0;
}
