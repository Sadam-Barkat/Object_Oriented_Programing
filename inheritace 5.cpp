#include<iostream>
using namespace std;

class Base
{
	protected:
		int bpro;
	public:
		Base()
		{
			bpro = 0;
			cout<<"Default bconstructor!"<<endl;
		}
		Base(int a)
		{
			bpro = a;
			cout<<"Perametrize bconstructor!"<<endl;
		}
		void display()
		{
			cout<<"dpro : "<<bpro<<endl;
		}
		~Base()
		{
			cout<<"Distroy bconstructor!"<<endl;
		}
};
class Drive:public Base
{
	private:
		int dpri;
	public:
		Drive()
		{
			dpri = 0;
			cout<<"Default dconstructor!"<<endl;
		}
		Drive(int a)
		{
			dpri = a;
			cout<<"Perametrize dconstructor!"<<endl;
		}
		Drive(int a, int b)
		{
			dpri = a;
			bpro = b;
			cout<<"2 Peremetrize dconstructor!"<<endl;
		}
		void display()
		{
			cout<<"bpro : "<<bpro<<endl<<"dpri : "<<dpri<<endl;
		}
		~Drive()
		{
			cout<<"Distroy dconstructor!"<<endl;
		}
};

int main(){
	cout<<"Start of main "<<endl;
	Drive objd(40,50);
	objd.display();
	
	cout<<"End of main "<<endl;
		
	return 0;
}
