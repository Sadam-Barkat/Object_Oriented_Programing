#include<iostream>
using namespace std;

int main(){
//	Pointer Example:---->
//	int a = 4;
//	int*b = &a;
//	cout<<"The address of a is : "<<b<<endl;
//	cout<<"The value of a is   : "<<*b<<endl;
//	
//	new keyword Example:---->
//	int c = 4;
//	int*d = new int(40);//dynamivaly initialize the value 
//	cout<<*d<<endl;
//	
//	int*arr = new int[3];
//	arr[0]=10;
//	arr[1]=20;
//	arr[2]=30;
//	for(int i=0; i<3; i++)
//	{
//		cout<<arr[i]<<endl;
//	}
//	
	
//	Delete key Example:---->
//	it is just use to delete the dynamicaly allocated memory 
		
	int*arr = new int[3];
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	
	delete[] arr;
	
	for(int i=0; i<3; i++)
	{
		cout<<arr[i]<<endl;
	}
	//its mean now dynamicaly allocated memory become free for store anonter value in it
	
	return 0;
}
