/*
constructor overloading means multiple constructors .Means to say we can take multiple constructors but we cannot take 
any other function more then one time
*/
#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
		complex(int x, int y){//This is a perametrize constructor
			a = x;
			b = y;
		}
		complex(int x){//This is a perametrize constructor
			a = x;
			b = 0;
		}
		complex(){//This is default constructor
			a = 0;
			b = 0;
			cout<<"Hello!"<<endl;
		}
		void printValue(){
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
		}
};

int main(){
	complex c1(1,2);
	c1.printValue();
	
	complex c2(5);
	c2.printValue();
	
	complex c3;
	c3.printValue();
	
	return 0;
}
