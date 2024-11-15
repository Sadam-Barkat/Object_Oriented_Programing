#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string name1;
	int roll1;
	float cgpa1;
	
	string name2;
	int roll2;
	float cgpa2;
	
	string name3;
	int roll3;
	float cgpa3;
	
	ifstream in;
	in.open("Record 1.txt");
	in>>name1;
	in>>roll1;
	in>>cgpa1;
	in>>name2;
	in>>roll2;
	in>>cgpa2;
	in>>name3;
	in>>roll3;
	in>>cgpa3;
	cout<<name1<<"\t"<<roll1<<"\t"<<cgpa1<<endl;
	cout<<name2<<"\t"<<roll2<<"\t"<<cgpa2<<endl;
	cout<<name3<<"\t"<<roll3<<"\t"<<cgpa3<<endl;
	
	return 0;
}
