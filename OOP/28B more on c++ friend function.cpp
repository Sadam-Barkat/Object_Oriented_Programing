#include<iostream>
using namespace std;
class c2;

class c1
{
	private:
		int val1;
		friend void exchange(c1 &x, c2 &y);
	public:
		void setdata1(int d1){
			val1 = d1;
		}
		void display(){
			cout<<val1;
		}
	
};
class c2
{
	private:
		int val2;
		friend void exchange(c1 &x, c2 &y);

	public:
		void setdata2(int d2){
			val2 = d2;
		}
		void display(){
			cout<<val2<<endl;
		}
};
/*
Trick of swap:
int temp = a;
     a = b;
     b = temp;
*/

void exchange(c1 &x, c2 &y){
	int temp = x.val1;
	x.val1 = y.val2;
	y.val2 = temp;
}



int main(){
	c1 objc1;
	c2 objc2;
	
	objc1.setdata1(40);
	objc2.setdata2(50);
	exchange(objc1,objc2);
	
	cout<<"The value of c1 afrer exchanging is : ";
	objc1.display();
	cout<<endl;
	cout<<"The value of c2 afrer exchanging is : ";
	objc2.display();
	
	return 0;
}
