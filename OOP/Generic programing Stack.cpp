#include<iostream>
using namespace std;

class stack
{
	private:
		int top=0;
		static const int cap=5;
		int st[cap];
	public:
		bool push(int e)
		{
			if(isfull())
			{
			   cout<<"Stack is full!"<<endl;
			   return false;
			}
			else
			{
				st[top]=e;
				top++;
				return true;
			}
		}
		bool pop()
		{
			if(isempty())
			{
				cout<<"Stack is empty!"<<endl;
				return false;
			}
			else
			{
				top--;
				return true;
			}
		}
		int topelement()
		{
			if(isempty())
			{
				cout<<"Stack is empty!"<<endl;
				return -1;
			}
			else
			{
				int a = st[top-1];
				return a;
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
		void PrintToptoBottom(void)
		{
			for(int i=top-1; i>=0; i--)
			{
				cout<<st[i]<<" ";
			}
		}
		void PrintBottomtoTop(void)
		{
			for(int i=0; i<top; i++)
			{
				cout<<st[i]<<" ";
			}
		}
};

int main(){
	stack s;
	s.push(5);
	s.push(10);
    cout<<"Topelement  : "<<s.topelement();
    cout<<endl;
    s.push(15);
    cout<<"Topelement  : "<<s.topelement();
    cout<<endl;
    s.pop();
    cout<<"Topelement  : "<<s.topelement();
    cout<<endl;
    s.push(50);
    cout<<"ToptoBottom : ";s.PrintToptoBottom();
    cout<<endl;
    cout<<"BottomtoTop : ";s.PrintBottomtoTop();
    
	
	
	return 0;
}
