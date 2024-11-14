/*
student ---->Test
student----->sports
Test   ----->Result
sports ----->Result
*/
#include<iostream>
using namespace std;

class student
{
	protected:
		int roll_number;
	public:
		void setroll_number(int);
		void printroll_number(void);
};
void student :: setroll_number(int r)
{
	roll_number=r;
}
void student :: printroll_number(void)
{
	cout<<"The Roll number is     : "<<roll_number<<endl;
}

class Test : virtual public student
{
	protected:
		float math,physic;
	public:
		void setsubjects(float,float);
		void printsubjects(void);
};
void Test :: setsubjects(float m1,float m2)
{
	math=m1;
	physic=m2;
}
void Test :: printsubjects(void)
{
	cout<<"The marks in Math is   : "<<math<<endl;
	cout<<"The marks in physic is : "<<physic<<endl;
}
class sports : virtual public student
{
	protected:
		float score;
	public:
		void setscore(float);
		void printscore(void);
};
void sports :: setscore(float sc)
{
	score=sc;
}
void sports :: printscore(void)
{
	cout<<"Your PT score is       : "<<score<<endl;
}
class Result : public Test,public sports
{
	private:
		int total;
	public:
		void display(void);
};
void Result :: display(void)
{
	total=math+physic+score;
	printroll_number();
	printsubjects();
	printscore();
	cout<<"Your Total Score is    : "<<total<<endl;
}

int main(){
	Result obj;
	obj.setroll_number(221698);
	obj.setsubjects(90,80);
	obj.setscore(100);
	obj.display();
	
	return 0;
}
