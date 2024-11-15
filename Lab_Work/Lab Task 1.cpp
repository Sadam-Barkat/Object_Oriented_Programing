#include<iostream>
using namespace std;

class counter
{
	protected:
	 int count;
	public:
		counter()
		{
			count = 0;
			cout<<"Default Cconstructor!"<<endl;
		}
		counter(int a)
		{
			count = a;
			cout<<"Peremetrize Cconstructor!"<<endl;
		}
		void setcount(int c)
		{
			count = c;
		}
		int getcount()
		{
			return count;
		}
		void inc()
		{
			count++;
		}
		void reset()
		{
			count = 0;
		}
		void display()
		{
			cout<<"count : "<<count<<endl;
		}
		~counter()
		{
			cout<<"Distroy Cconstructor!"<<endl;
		}
	
};
class Decounter:public counter
{
	public:
		
		Decounter()
		{
			count = 0;
			cout<<"Default Deconstructor!"<<endl;
		}
		Decounter(int a)
		{
			count = a;
			cout<<"Peremetrize Deconstructor!"<<endl;
		}
		void dec()
		{
			count--;
	    }
		void display()
		{
			cout<<"count : "<<count<<endl;
		}
		
		~Decounter()
		{
			cout<<"Distroy Deconstructor!"<<endl;
		}
	
};

int main(){
	counter c1,c2(10);
	c1.display();
	c2.display();
	c1.inc();
	c2.inc();
	c1.inc();
	c1.display();
	c2.display();
	Decounter dc1(20),dc2;
	dc1.display();
	dc2.display();
	dc1.dec();
	dc2.inc();
	dc1.display();
	dc2.display();
	dc1.reset();
	dc1.display();
	dc2.display();

	return 0;
}
