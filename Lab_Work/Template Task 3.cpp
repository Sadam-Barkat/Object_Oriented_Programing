#include<iostream>
using namespace std;

template <class t1>
class Stack
{
	private:
		t1 top=0;
	    static const t1 cap=10;
	    t1 st[cap];
	public:
		bool push(t1 a)
		{
			if(isfull())
			{
				cout<<"Stack is full"<<endl;
				return false;
			}
			else
			{
				st[top]=a;
				top++;
			}
		}
		bool pop()
		{
			if(isempty())
			{
				cout<<"Stack is empty"<<endl;
				return false;
			}
			else
			{
				top--;
				return true;
			}
		}
		bool isfull()
		{
			if(top==cap)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool isempty()
		{
			if(top==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void PrintToptobottom(void)
		{
			for(t1 i=top-1; i>=0; i--)
			{
				cout<<st[i]<<endl;
			}
		}
		void PrintBottomtoTop(void)
		{
			for(t1 i=0; i<top; i++)
			{
				cout<<st[i]<<endl;
			}
		}
};

int main(){
	Stack<float>obj1;
	obj1.push(1);
    obj1.push(2);
    obj1.push(3);
    obj1.PrintBottomtoTop();
    

	return 0;
}
