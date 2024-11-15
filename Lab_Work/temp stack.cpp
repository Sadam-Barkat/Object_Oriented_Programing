#include<iostream>
using namespace std;
const int MAX = 100;
template<class temp>
class Stack{
	private:
		temp st[MAX];
		int top;
	public:
	Stack()
	{
		top=0;
	}
	void push(temp t1)
	{
		st[top] = t1;
		top++;
	}	
	temp pop()
	{
		top--;
		return st[top];
	}
};

int main(){
	Stack<float>s1;
	s1.push(11.1);
	s1.push(22.2);
	s1.push(33.3);
//	s1.display();
	cout<<"1:"<<s1.pop()<<endl;
	cout<<"2:"<<s1.pop()<<endl;
	cout<<"3:"<<s1.pop()<<endl;
		
}
