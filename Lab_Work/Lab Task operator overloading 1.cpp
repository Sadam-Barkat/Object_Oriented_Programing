#include<iostream>
using namespace std;

class container
{
	private:
		int count1=0;
		int count2=0;
	public:
		void operator ++()
		{
			count1++;
		}
		void operator --()
		{
			count1--;
		}
		void display(void)
		{
			cout<<"The value of a is : "<<count1<<endl;
		}
		
};

int main(){
	container obj;
	obj.operator ++();
	obj.display();
	obj.operator --();
	obj.display();
	++obj;
	++obj;
	++obj;
	++obj;
	++obj;
	obj.display();

	
	
	return 0;
}
