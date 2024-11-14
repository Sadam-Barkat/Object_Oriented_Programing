#include<iostream>
using namespace std;

class student
{
	protected:
	   int roll_number;
	public:
	   void set_roll_number(int);
	   void get_roll_number(void);
};
void student :: set_roll_number(int rol)
{
	roll_number = rol;
}
void student :: get_roll_number(void)
{
	cout<<"The roll_number is : "<<roll_number<<endl;
}
class Exam : public student
{
	protected:
		float math;
		float physic;
	public:
		void setdata(float,float);
		void getdata(void);
};
void Exam :: setdata(float m1,float m2)
{
	math=m1;
	physic=m2;
}
void Exam :: getdata(void)
{
	cout<<"The marks in Math are : "<<math<<endl;
	cout<<"The marks in physic are : "<<physic<<endl;
}
class Result : public Exam
{
	private:
		float percentage;
	public:
		void display();
};
void Result :: display()
{
	get_roll_number();
	getdata();
	cout<<"Yor percentage is : "<<(math+physic)/2<<endl;
}

int main(){
	Result sadam;
	sadam.set_roll_number(221698);
	sadam.setdata(94,90);
	sadam.display();
	
	return 0;
}
