#include<iostream>
using namespace std;

class A
{
	public:
	virtual	void show()=0;

};
class B : public A
{
	public:
		void show()
		{
			cout<<"Drived class!"<<endl;
		}
};

int main(){
	B objb;
	objb.show(); 
	A obja;
	
	return 0;
}
