#include<iostream>
using namespace std;
 
class ThreeDpoint
{
	private:
		int *x;
		int *y;
		int *z;
	public:
		ThreeDpoint()
		{
			x=new int(0);
			y=new int(0);
			z=new int(0);
		}
		ThreeDpoint(int a, int b, int c)
		{
			x=new int;
			y=new int;
			z=new int;
			*x=a;
			*y=b;
			*z=c;
		}
		ThreeDpoint (ThreeDpoint &obj)
		{
			x=new int;
			y=new int;
			z=new int;
		*x=*obj.x;
			*y=*obj.y;
			*z=*obj.z;
		}
		void operator =(ThreeDpoint &obj)
		{
			*x=*obj.x;
			*y=*obj.y;
			*z=*obj.z;
		}
		~ThreeDpoint(){}
		int setx(int a)
		{
			*x=a;
		}
		int sety(int b)
		{
			*y=b;
		}
		int setz(int c)
		{
			*z=c;
		}
		int getx()
		{
			return *x;
		}
		int gety()
		{
			return *y;
		}
		int getz()
		{
			return *z;
		}
		void display(void)
		{
			cout<<"X= "<<*x<<"\t"<<"Y= "<<*y<<"\t"<<"Z= "<<*z<<endl;
		}
}; 
 
int main(){
	ThreeDpoint p1(10,20,30);
	ThreeDpoint p2(p1);
	p1.display();
	p2.display();
	ThreeDpoint p3(1,2,3);
	p1=p3;
	p1.display();
	p3.display();
	p2.setx(100);
	p1.display();
	p2.display();
	
	
	return 0;
}
