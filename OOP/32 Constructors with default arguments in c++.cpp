#include<iostream>
using namespace std;

class simple
{
	private:
		int data1;
		int data2;	
		int data3;
	public:
		simple(int a, int b,int c=9){//This is a default argument in constructor c=9 . so we can take default argument in constructor ok
			data1 = a;
			data2 = b;
			data3 = c;
		}
		void printData();
};
void simple::printData(){
	cout<<"The first data is  : "<<data1<<endl<<"The second data is : "<<data2<<endl<<"The third data is  : "<<data3<<endl;
}
int main(){
	simple s(1,3);//lakin agar ham yaha pr 3no ki value set krday to ya isko prefer krega or default arguments ko nhi krega
    s.printData();
	
	return 0;
}
