#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}

int main(){
	int a=4,b=5;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	cout<<"The value of a before swaping is : "<<a<<endl;
	cout<<"The value of b before swaping is : "<<b<<endl;
	swap(p1,p2);
	cout<<"The value of a after swaping is : "<<a<<endl;
	cout<<"The value of b after swaping is : "<<b<<endl;
	return 0;
}
