#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream sout1("sample61.txt");
	string name1;
	for(int i=0; i<3; i++)
	{
	cout<<"Enter the name : ";
	cin>>name1;
	sout1<<name1<<endl;
	}
	sout1.close();
	cout<<endl;
	
	ifstream sin1("sample61.txt");
	string name2;
	getline(sin1,name2);
	cout<<name2<<endl;
	getline(sin1,name2);
	cout<<name2<<endl;
	getline(sin1,name2);
	cout<<name2<<endl;
	sin1.close();
    cout<<endl; 
     
    // connecting our file with sout stream 
    ofstream sout2("file61.txt"); 
    // creating a name string and filling with the string entered by the user
    string name3;
    cout<<"Ente the name : ";
    cin>>name3;
    // Writing a string to the file
    sout2<<"My name is " + name3;
    sout2.close();
	cout<<endl;
	
    string name4;
    ifstream sin2("file61.txt");
    getline(sin2,name4);
    cout<<name4;   
	sin2.close(); 
    cout<<endl; 
	
	return 0;
}
