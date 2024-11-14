#include<iostream>
using namespace std;

class Base
{
	protected:
		int bpro;
	public:
		Base(){
			bpro = 0;
			cout<<"Default bconstructor!"<<endl;
		}
		Base(int a){
			bpro = a;
			cout<<"Perametrize bconstructor!"<<endl;
		}
		void displayB(){
			cout<<"bpro:"<<bpro<<endl;
		}
		~Base(){
			cout<<"Distroy the bconstrustor!"<<endl;
		}
	
};
class Drive:public Base
{
	private:
		int dpri;
	public:
		Drive(){
			dpri = 5;
			cout<<"Default dconstructor!"<<endl;
		}
		Drive(int a){
			dpri = a;
			cout<<"Perametrize dconstructor!"<<endl;
		}
		~Drive(){
			cout<<"Distroy the dconstructor!"<<endl;
		}
};

int main(){
	cout<<"Start of main"<<endl;
	Base objb(20);
	objb.displayB();
	cout<<"End of main"<<endl;
	
	
	
	return 0;
}
