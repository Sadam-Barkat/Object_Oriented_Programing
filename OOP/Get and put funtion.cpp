#include<iostream>
using namespace std;

int main(){
	char ch;
	int count=0;
	
	while(ch!='\n')
	{
	cin.get(ch);
	cout.put(ch);
	count++;
	}
	cout<<endl;
	cout<<"The total number of character="<<count;
	cout<<endl;
    char ch1=68;
    cout.put(ch1); 
    return 0;

}
