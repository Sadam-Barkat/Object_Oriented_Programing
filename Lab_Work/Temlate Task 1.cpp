#include<iostream>
using namespace std;

template<class t>

t fun1(t x, t y)
{
	t z;
	z=x+y;
	return z;
}

int main(){
//	cout<<"Using for int"<<endl;
//	int a1=10;
//	int b1=20;
//	cout<<fun1(a1,b1)<<endl;
	
	
    cout<<"Using for float"<<endl;
	float a2=3.44;
	float b2=4.44;
	cout<<fun1(a2,b2)<<endl;
//	
//	cout<<"Using for double"<<endl;
//	double a3=2.33333333;
//	double b3=4.55555555;
//	cout<<fun1(a3,b3)<<endl;
//	
//	cout<<"Usin for char"<<endl;
//	string a4="sadam";
//	string b4="khan";
//	cout<<fun1(a4,b4)<<endl;
//	
	return 0;
}
