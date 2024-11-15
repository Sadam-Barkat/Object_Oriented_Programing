#include<iostream>
using namespace std;

template<class t1,class t2>
void fun1(t1 a,t2 b)
{
	t1 c;
	t2 d;
	c=a+b;
	d=a+b;
	cout<<c<<endl;
	cout<<d<<endl;
}
template<class t1,class t2>
void fun2(t1 a,t2 b)
{
	t1 c;
	t2 d;
	c=a*b;
	d=a*b;
	cout<<c<<endl;
	cout<<d<<endl;
}

int main(){
	int a=10;
	float b=9.99;
	fun1(a,b);
	cout<<endl;
	fun2(b,a);
	
	return 0;
}
