#include<iostream>
using namespace std;

class student
{
	private:
		string name;
		int age;
		float cgpa;
	public:
		void setstring(string n)
		{
			name = n;
			cout<<"The name of student:"<<n<<endl;
		}
		
			void setint(int a)
		{
			age = a;
			cout<<"The age of student:"<<a<<endl;
		}
		
			void setfloat(float c)
		{
			cgpa = c;
			cout<<"The cgpa of student:"<<c<<endl; 
        }

};

int main(){
	student sadam;
	sadam.setstring("Sadam");
	sadam.setint(20);
	sadam.setfloat(3.5);
	
	cout<<endl;
	
	student sana;
	sana.setstring("Sana");
	sana.setint(18);
	sana.setfloat(3.8);
	
	return 0;
}
