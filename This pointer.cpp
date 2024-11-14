#include<iostream>
using namespace std;

class Max
{
	private:
		int n;
	public:
		Max(int n=0)//n=0 islisy kia hay agar obj koi paremerter pass nhi kareagha to ya automatically 0 hojayga 
		            //yani kay default constructor ban jayga
		{
			this->n=n;
		}
		Max& greater(Max& obj)
		{
			if(obj.n>n)
			{
				return obj;
			}
			else
			{
				return *this;
			}
		}
		void display(void)
		{
			cout<<"Greater valuse is : "<<n<<endl;
		}
};

int main(){
	Max obj1(10),obj2(20),obj3;
	obj3=obj1.greater(obj2);
	obj3.display();
	
	return 0;
}
