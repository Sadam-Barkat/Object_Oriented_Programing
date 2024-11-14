#include<iostream>
using namespace std;
// Note: Distructor cannot take arguments and cannot return values ok

int count = 0;
class num{
	public:
		num()
		{
			count++;
			cout<<"This is the time when constructor is called for object number "<<count<<endl;
		}
		~num()
		{
			cout<<"This is the time when our distructor is called "<<count<<endl;
			count--;
		}
};

int main(){
	cout<<"We are inside our mian function "<<endl;
	cout<<"We create first object n1 "<<endl;
	num n1;
	{
		cout<<"Well come to the Block "<<endl;
		cout<<"We creating two more objects "<<endl;//Note:Block of code called as well as destroy then block will be exiting
		num n2,n3;
		cout<<"Exiting the Block "<<endl;
	}
	cout<<"Back to the main "<<endl;
	
	return 0;
}
