#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
		complex(int x, int y){
			a = x;
			b = y;
			cout<<"Hello!"<<endl;
		}
		void printNumber(){
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
		}
};

int main(){
	//Implicite call
	complex a(4,5);
	a.printNumber();
	
	//Explicite call
	complex b = complex(6,7);
	b.printNumber();
	
	
	return 0;
}
