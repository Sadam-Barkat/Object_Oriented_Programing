#include<iostream>
using namespace std;
class Counter{
	private :
		int *count;
	public :
	Counter()
	{
	     count =new int;
		*count =0;
	}	
	Counter(int a){
		count=new int(a);
	}
		Counter(const Counter &c){
		count =new int;
		*count = *c.count;
	}
	Counter operator ++(int){
		return Counter( ++*count);
	}
	void set(int a){
		*count =a;
	}
	Counter operator =(const Counter &c){
		*count =*c.count;
		return *count;
	}
	void display(){
		cout<<"Count"<<*count<<endl;
	}
	~Counter(){
//		cout<<"Destructor called\n";
		delete count;

	}
};
int main(){
	Counter c1,c2,c3(7);
	cout<<"C1 =";
	c1.display();
	cout<<"C2 =";
	c2.display();
	Counter c4(c3);
	cout<<"C4 =";
	c4.display();
	c3.set(10);
	cout<<"C3 =";
	c3.display();
	cout<<"C4 =";
	c4.display();
	c1=c3;
	cout<<"C1 =";
	c1.display();
	cout<<"C3 =";
	c3.display();
	c2=c1++;
	cout<<"C1 =";
	c1.display();
	cout<<"C3 =";
	c3.display();
	cout<<"C2 =";
	c2.display();
	
}
