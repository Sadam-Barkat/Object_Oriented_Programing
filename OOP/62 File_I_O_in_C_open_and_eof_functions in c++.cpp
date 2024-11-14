#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream out;
	out.open("sample62.txt");
	out<<"This is toturial of c++ by code Harry!"<<endl;
	out<<"This is toturial of java by code Harry!"<<endl;
	out<<"This is toturial of python by code Harry!"<<endl;
    out<<"This is toturial of c# by code Harry!"<<endl;
    out<<"This is toturial of css by code Harry!"<<endl;
	out.close();
	
	string s;
	ifstream in;
	in.open("sample62.txt");
	
//	getline(in, s);     |
//	cout<<s<<endl;      |
//	getline(in,s);      |
//	cout<<s<<endl;      |
//	getline(in, s);     | -------------->This is a long method we use while loop to solve this problem in short
//	cout<<s<<endl;      |
//	getline(in, s);     |
//	cout<<s<<endl;      | 
//	getline(in, s);     | 

    while(in.eof()==0) 
    {
    	getline(in, s);
    	cout<<s<<endl;
	}
    in.close();
	
	return 0;
}
