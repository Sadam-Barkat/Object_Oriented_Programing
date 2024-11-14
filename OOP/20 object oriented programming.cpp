#include<iostream>
using namespace std;

class Animal
{
	private:
	float speed;
	
	public:
	string colour;
	int	legs;
       void setdata(float s); //function declaration
       void getdata()
       {
       	cout<<"Colour is:"<<colour<<endl;
       	cout<<"Leges are:"<<legs<<endl;
       	cout<<"Speed is :"<<speed<<endl;
	   }
};
void Animal :: setdata(float s)
{
	s = speed;
}
int main(){
	Animal lion;
	lion.colour="Brown";
	lion.legs=4;
	lion.setdata(300);
	lion.getdata();
	
	return 0;
}
