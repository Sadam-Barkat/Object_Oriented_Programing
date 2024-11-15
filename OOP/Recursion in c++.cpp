#include<iostream>
using namespace std;

void fun(int x)
{
	cout<<"X : "<<x<<endl;
	if(x<=7)
	{
		fun(x+1);
	}
}
void fun2(int a)
{
	if(a>=10)
	{
	    fun2(a-1);
		cout<<"a : "<<a<<endl;	
	}
}
int fun3(int i)
{
	if(i<4)
	{
	    i++;
		cout<<fun3(i);
		cout<<endl;
	}
	return i;
}
void fun4(int y)
{
	cout<<"Y : "<<y<<endl;
	if(y<10)
	fun4(y+1);
    cout<<"Y : "<<y<<endl;
}

int main(){
	//fun(5);
	//fun2(13);
	//cout<<fun3(1);
	fun4(7);
	return 0;
}
