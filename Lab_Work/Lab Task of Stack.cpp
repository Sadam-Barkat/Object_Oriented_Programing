#include<iostream>
using namespace std;

class stack
{
	private:
		int top=0;
	    static const int cap=6;
		int st[cap];
	public:
		bool push(int e)
		{
			if(isfull())
			{
				return false;
			}
			else
			{
				st[top]=e;
				top++;
				return true;
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
		int topelement()
		{
			if(isempty())
			{
				cout<<"Error! Stack is empty"<<endl;
				return -1;
			}
			else
			{
			   int a = st[top-1];
		       return a;
			}
		}
			bool pop()
		{
			if(isempty())
			{
				cout<<"Error! Stack is empty"<<endl;
				return false;
			}
			else
			{
				top--;
				return true;
			}
		}
		void printToptoBottom(void)
		{
			for(int i=top-1; i>=0; i--)
			{
				cout<<st[i]<<" ";
			}
		}
		void printBottomtoTop(void)
		{
			for(int i=0; i<top; i++)
			{
				cout<<st[i]<<" ";
			}
		}
	
};

int main(){
     stack s;
     s.push(10);
     s.push(20);
     s.push(30);
     cout<<"Topelement : "<<s.topelement();
     cout<<endl;
     s.push(40);
     cout<<"Topelement : "<<s.topelement();
     cout<<endl;
     s.pop();
     s.printBottomtoTop();
     s.push(50);
     s.push(60);
     cout<<endl;
     s.printBottomtoTop();
     cout<<endl;
     s.push(70);
     cout<<"Topelement : "<<s.topelement();
	
	
	return 0;
}
