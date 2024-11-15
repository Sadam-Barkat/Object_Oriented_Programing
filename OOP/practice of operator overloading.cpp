#include<iostream>
using namespace std;

class count
{
	private:
		int n;
	public:
		count()
		{
			n=2;
		}
		void display(void)
		{
			cout<<"n : "<<n<<endl;
		}
		count operator +(count obj)
		{
			count temp;
			temp.n=n+obj.n;
			return temp;
		}
};

int main(){
	count obj1,obj2,obj3;
	obj3=obj1+obj2;
	obj1.display();
	obj2.display();
	obj3.display();
	
	return 0;
}
