#include<iostream>
using namespace std;

void change(int a)
{
	a=a+10;
	cout<<a<<endl;
}
int main(){
	int a;
	cout<<"enter the value : ";
	cin>>a;
	cout<<a<<endl;
	change(a);
	cout<<endl;
	cout<<a;
	return 0;
}
