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
			cout<<"Peremetrize bconstructor!"<<endl;
		}
		void display()
		{
			cout<<"bpro : "<<bpro<<endl;
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
			cout<<"Peremetrize dconstructor!"<<endl;
		}
		Drive(int a, int b)
		{
			dpri = a;
			bpro = b;
			cout<<"2 Peremetrize dconstructor!"<<endl;
		}
		void display()
		{
			cout<<"dpri : "<<dpri<<endl<<"bpro : "<<bpro<<endl;
		}
		~Drive()
		{
			cout<<"Distroy dconstructor!"<<endl;
		}
};

int main(){
	cout<<"Start of main "<<endl;
	Base objb1;
	objb1.display();
	{
		cout<<"Start of Block-1 "<<endl;
		Base objb2(50);
		objb2.display();
		cout<<"Exiting of Block-1 "<<endl;
	}
	cout<<"Point 1 main "<<endl;
	{
		cout<<"Start of Block-2 "<<endl;
		Drive objd1;
		objd1.display();
		cout<<"Exiting of Block-2 "<<endl;
	}
	cout<<"Point 2 main "<<endl;
	{
		cout<<"Start of Block-3 "<<endl;
		Drive objd2(60);
		objd2.display();
		
		cout<<"Exiting of Block-3 "<<endl;
	}
	cout<<"Point 3 main "<<endl;
	{
		cout<<"Start of Block-4 "<<endl;
		Drive objd3(70,80);
		objd3.display();
	    cout<<"Exiting of Block-4 "<<endl;
	}	
	cout<<"End of main "<<endl;
	
	return 0;
}
