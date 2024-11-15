#include<iostream>
using namespace std;

class Base
{
	protected:
		int bpro;
	public:
		Base(){
			bpro = 0;
			cout<<"Default constructor Base"<<endl;
		}
		void displayB(){
			cout<<"bpro:"<<bpro<<endl;
		}
		~Base(){
			cout<<"Distroy constructor!"<<endl;
		}
};
class Drive:public Base
{
	private:
		int dpri;
	public:
		Drive(){
			dpri = 5;
			cout<<"Default construtor"<<endl;
		}
		void displayD(){
			cout<<bpro<<endl<<dpri<<endl;
		}
		~Drive(){
			cout<<"Distroy constructor!"<<endl;
		}		
};
int main(){
	cout<<"Start of main"<<endl;
	Base b;
	b.displayB();
	cout<<"End of main"<<endl;
	
	return 0;
}
