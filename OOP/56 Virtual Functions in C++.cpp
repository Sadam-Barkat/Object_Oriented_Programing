#include<iostream>
using namespace std;

class Base
{
	public:
		int varb;
	virtual	void display(void)
		{
			cout<<"The value of Base class variable is  : "<<varb<<endl;
		}
};
class Drived : public Base
{
	public:
		int vard;
		void display(void)
		{
			cout<<"The value of Base class variable is   : "<<varb<<endl;
			cout<<"The value of Drived class variable is : "<<vard<<endl;
		}
};

int main(){
	Base *bp;
	Base objb;
	Drived *dp;
	Drived objd;
	bp=&objb;
	bp=&objd;
	dp=&objd;
	
	bp->varb=1;
	dp->vard=2;
	bp->display();
	
	return 0;
}
