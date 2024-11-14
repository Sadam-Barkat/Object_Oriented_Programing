#include<iostream>
using namespace std;

int main(){
	int *a=new int[3];
	a[0]=10;
	a[1]=20;
	a[2]=30;
	cout<<*a<<endl;
	a++;
	cout<<*a<<endl;
	a++;
	cout<<*a<<endl;
	cout<<a[0];
	
	
	return 0;
}
