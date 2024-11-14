#include<iostream>
using namespace std;

class Transmitter
{
	protected:
		int id = 4;
	public:
		void print()
		{
			cout<<"Transmitter : "<<id<<endl;
		}
};
class Reciever
{
	protected:
		int id = 5;
	public:
		void print()
		{
			cout<<"Reciever : "<<id<<endl;
		}
};
class Phone:public Transmitter,public Reciever
{
	public:
		void printID()
		{
		Transmitter::print();
		Reciever::print();
		cout<<Transmitter::id<<endl;
		cout<<Reciever::id<<endl;
		cout<<"Phone"<<endl;
		}
};

int main(){
	Phone objp;
	objp.printID();
	return 0;
}
