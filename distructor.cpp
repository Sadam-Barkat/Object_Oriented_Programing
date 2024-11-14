#include<iostream>
using namespace std;

class formula1
{
	private:
		int speed;
		int pickup;
		
	public:
		formula1(int s, int p)
		{
			cout<<"This is a constructor!"<<endl;
			speed = s;
			pickup = p;
		}
		void display()
		{
			cout<<"The speed of the car is : "<<speed<<endl;
			cout<<"The pickup of the car is : "<<pickup<<endl;
		}
		~formula1()
		{
			cout<<"This is a distructor!"<<endl;
		}
};

int main(){
	formula1 car(120,150);
	car.display();
	
	return 0;
}
