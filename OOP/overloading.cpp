#include<iostream>
using namespace std;

class A
{
	private:
		int age;
		float cgpa;
		char ch;
	public:
		int print(int a, int b)
		{
			age = a;
			cgpa = b;
			cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
		}
		int print(char a, int b)
		{
			ch = a;
			age = b;
			cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
		}
		int print(char a, int b, float c)
		{
			ch = a;
			age = b;
			cgpa = c;
			cout<<"a : "<<a<<endl<<"b : "<<b<<endl<<"c : "<<c<<endl;
		}
		void print(int a, int b)
		{
			age = a;
			cgpa = b;
			cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
		}
};

int main(){
	A obja;
	obja.print(30,3.4);
	obja.print('A',4);
	obja.print('b',23,2.3);
	
	return 0;
}
