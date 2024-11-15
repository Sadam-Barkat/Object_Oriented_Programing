#include<iostream>
using namespace std;

class simple
{
	private:
	   void read(); //function declaration
	public:
	   void display(); //function declaration 	
		
};
void simple :: read()
{
   cout<<"Im a private"<<endl;	
} 
void simple :: display()
{
	cout<<"Im a public"<<endl;
	read();
}

int main(){
	simple object;
	object.display();
	
	return 0;
}
