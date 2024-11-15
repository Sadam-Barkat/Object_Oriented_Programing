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
		void displayd(){
			cout<<"bpro:"<<bpro<<endl<<"dpri:"<<dpri<<endl;
		}
		~Drive(){
			cout<<"Distroy the dconstructor!"<<endl;
		}
};

int main(){
	cout<<"Start of main"<<endl;
	Drive objd(30);
	objd.displayd();
	cout<<"End of main"<<endl;
	
	
	
	return 0;
}
