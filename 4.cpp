#include<iostream>
using namespace std;

class car
{
	public:
	string	colour;
	int	model;
    int engine;
};
int main(){
	car object;
	object.colour="Red";
	object.model=2023;
	object.engine=200;
		
	cout<<"Colour of Car:"<<object.colour<<endl;
	cout<<"Model of Car:"<<object.model<<endl;
	cout<<"Engine of Car:"<<object.engine<<endl;
		
		
	return 0;
}
