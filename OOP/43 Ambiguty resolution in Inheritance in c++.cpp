#include<iostream>
using namespace std;

class Base1
{
	private:
		int a;
	public:
		void greet();
};
void Base1 :: greet()
{
	cout<<"Hello! how are you!"<<endl;
}
class Base2
{
	private:
		int b;
	public:
		void greet();
};
void Base2 :: greet()
{
	cout<<"Kase hay ap!"<<endl;
}
class Drived : public Base1,public Base2
{
	private:
		int c;
	public:
		void show();
};
void Drived :: show()
{
	Base1::greet();
	Base2::greet();
}
int main(){
	Drived obj;
	obj.show();
	obj.Base1::greet();
	obj.Base2::greet();
	
	
	
	return 0;
}
