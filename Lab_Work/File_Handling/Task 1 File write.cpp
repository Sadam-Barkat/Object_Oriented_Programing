#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string name1="Sadam";
	int roll1=221698;
	float cgpa1=3.5;
	
	string name2="Haris";
	int roll2=221697;
	float cgpa2=3.88;
	
	string name3="Hussain";
	int roll3=221696;
	float cgpa3=3.85;
	
	ofstream out;
	out.open("Record 1.txt");
	out<<name1<<endl;
	out<<roll1<<endl;
	out<<cgpa1<<endl;
	out<<name2<<endl;
	out<<roll2<<endl;
	out<<cgpa2<<endl;
	out<<name3<<endl;
	out<<roll3<<endl;
	out<<cgpa3<<endl;
	
	return 0;
}
