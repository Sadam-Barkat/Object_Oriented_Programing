#include<iostream>
using namespace std;

//points are x and y coordinates
class point
{
	private:
		int x,y;
	public:
		point(int a, int b){
			x = a;
			y = b;
			cout<<"Hello!"<<endl;
		}
		void displaypoint(){
			cout<<"The point is ("<<x<<","<<y<<")"<<endl;
		}
};
/*
Quize:
create a function (Hinte: make it is a friend fuction) which takes 2 points 
objects and computes the distance between them
*/

int main(){
	point p(1,2);
	point q(3,5);
	p.displaypoint();
	q.displaypoint();
	return 0;
}
