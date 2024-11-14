// Remember that the compiler always gives us default copy constructor in constructor case ok
#include<iostream>
using namespace std;

class Number
{
	private:
		int a;
	public:
		Number(){
			//Important Note: default constructor is neccessery for runing of all other constructors ok
		}
		Number(int num){
			a = num;
		}
		//When there is no copy constructor then compiler provide its own copy constructor 
		//The above line is most important because it is asked in interview ok
		Number(Number &obj){
			cout<<"Copy constructor called!!!"<<endl;
			a = obj.a;
		}
		void display(){
			cout<<"The number is : "<<a<<endl;
		}
};

int main(){
	Number x(10),y(20),z(30),z2;
	x.display();
	y.display();
	z.display();
	
	Number z1(z);//copy constructor invoked(call)
	z1.display();
	
	z2 = z1;//copy constructor cannot inveked(call)
	Number z3 = z;//copy constructor invoked
	//Note: in copy constructor z1 or x1 or y1 should exactly resemble x or y or z
	return 0;
}
