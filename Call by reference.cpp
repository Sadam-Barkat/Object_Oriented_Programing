#include<iostream>
using namespace std;

void change(int *p)
{
	*p=*p+10;
	cout<<"The value of a is : "<<*p<<endl;
}
int main(){
	int a,*p;
	p=&a;
	cout<<"Enter the value : ";
	cin>>a;
	cout<<"The value of a before function call is : "<<a<<endl;
	change(p);
	cout<<"The value of a after function call is  : "<<a<<endl;d
	
	
	
	return 0;
}
