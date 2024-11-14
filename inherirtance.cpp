#include<iostream>
using namespace std;

class A
{
	private:
		int priA;
	protected:
		int proA;
	public:
		int pubA;
		void displayA()
		{
			cout<<priA<<endl<<proA<<endl<<pubA<<endl;
		}
	
};
class B:public A
{
	private:
		int priB;
	protected:
		int proB;
	public:
		int pubB;
		void displayB()
		{
	      	cout<<priA<<endl<<proA<<endl<<pubA<<endl;
	      	cout<<priB<<endl<<proB<<endl<<pubB<<endl;
		}

};
int main(){
	B objB;
	A objA;
	objB.displayB();
	objA.displayA();
	cout<<objA.proA;
	
	
	
	
	
	
	
	
	
	return 0;
}
