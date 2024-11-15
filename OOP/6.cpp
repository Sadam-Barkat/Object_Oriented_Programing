#include<iostream>
using namespace std;

class student
{
	private:
	    string name;
	    int sem;
	    float cgpa;
	public:
//		void setname(string n)
//		{
//			n = name;
//		}
//		void setsem(int s)
//		{
//			s = sem;
//		}
//		void setcgpa(float c)
//		{
//			c = cgpa;
//		}
//		string getname()
//		{
//			return name;
//		}
//		int getsem()
//		{
//			return sem;
//		}
//		float getcgpa()
//		{
//			return cgpa;
//		}
		void print(){
			cout<<name<<endl<<sem<<endl<<cgpa<<endl;
		}
		void input()
		{
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the semester:";
			cin>>sem;
			cout<<"Enter the cgpa:";
			cin>>cgpa;
		}
};

int main(){
	 student A;
	 A.input();
	 A.print();
	return 0;
}
