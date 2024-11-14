#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in c++:
1.fstreambase
2.ifstream---> Drived by fstreambase
3.ofstream---> Drived by fstreambase
*/
//In order work with files in c++, you will have to open it.Primarily, there are 2 ways to open a file:
//1.using the constructor
//2.using the number function open() of the class

int main(){
	// Opening file using Constructor and writting it
	string s1="sadam";
	ofstream out;
	out.open("sample60.txt");//writing operation
	out<<s1;
	out.close();
	
	// Opening file using constructor and reading  it
	ifstream in;
	string s2;
	in.open("sample60.txt");//reading operation 
//	in>>s2;
	getline(in, s2);
	cout<<s2;
	in.close();
	
	return 0;
}
