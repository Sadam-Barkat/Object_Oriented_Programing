#include<iostream>
using namespace std;

class Book
{
	private:
		int pages;
	public:
		Book()
		{
			pages = 250;
			cout<<"The book name is Sadam's Law"<<endl;
			cout<<"The pages are : "<<pages<<endl;
		}
};
int main(){
	Book b;
	return 0;
}
