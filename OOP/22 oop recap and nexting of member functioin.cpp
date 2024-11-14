// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

#include<iostream>
using namespace std;

class binary
{
	private:
		string s;
		void chk_bin(void);//we make it private after completion of program
	public:
		void read(void);
		void display(void);
		void ones_compliment(void);
};
void binary::read(){
	cout<<"Enter the binary number:"<<endl;
	cin>>s;
	cout<<"The binary numbers are:"<<endl;
}
void binary::chk_bin(){
	for(int i=0; i<s.length(); i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"This is not binary number!"<<endl;
		}
	}
}
void binary::display(){
	for(int i=0; i<s.length(); i++){
		cout<<s.at(i);
	}
	cout<<endl;
}
void binary::ones_compliment(){
	chk_bin();
	cout<<"Ones Compliment of the  binary numbers are:"<<endl;
	for(int i=0; i<s.length(); i++)
	{
		if(s.at(i)=='0')
		{
			s.at(i)='1';
		}
        else
		{
        	s.at(i)='0';
		}
	}
}
int main(){
	binary b;
	b.read();
//	b.chk_bin(); /*we comment it because we call this function in a ones_compliment function.so therefor if we use this function 
//in the main function it gives us error and the error would be that "this is a private you cannot access this"
	b.display();
	b.ones_compliment();
	b.display();
	
	return 0;
}
