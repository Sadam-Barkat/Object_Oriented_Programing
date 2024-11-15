#include<iostream>
using namespace std;
class Point{
	protected:
		int *x;
		int *y;
	public:
	Point(){
		x=new int;
		y=new int;
		*x=0;
		*y=0;
	}	
	Point(int a,int b){
		x=new int(a);
		y=new int(b);
	}
	Point(const Point &p){
		x=new int;
		y=new int;
		*x=*p.x;
		*y=*p.y;
		}
		~Point(){
			delete x;
			delete y;
		}
	int getx(){
		return  *x;
	}
	int gety(){
		return *y;
	}
	void setx(int a){
		*x=a;
	}
	void sety(int b){
		*y=b;
	} 
	void show(){
	cout<<"("<<*x<<","<<*y<<")"<<endl;
}
    Point& operator =(const Point &p){
    	*x=*p.x;
    	*y=*p.y;
    	return *this;
	}
};
class ThreeDPoint:public Point{
	private:
		int *z;
	public:
	ThreeDPoint(){
		Point(); 
		z=new int;
		*z = 0;
	}	
	ThreeDPoint(int a,int b,int c):Point(a,b){
       z=new int(c);
	}
	ThreeDPoint(const ThreeDPoint &t){
		x=new int;
		y=new int;
	    z=new int;
	    *x=*t.x;
	    *y=*t.y;
		*z=*t.z;	
	}
	~ThreeDPoint(){
		delete z;
	}
	void setz(int c){
		*z=c;
	}
	int getz(){
		return *z;
	}
	void display(){
		cout<<"("<<*x<<","<<*y<<","<<*z<<")"<<endl;
	}
	ThreeDPoint operator =(const ThreeDPoint &t){
		*x=*t.x;
		*y=*t.y;
		*z=*t.z;
		return *this; 
	}
};
int main(){
     Point p1,p2(5,7);
     cout<<"P1 =";
     p1.show();
     cout<<"P2 =";
     p2.show();
     Point p3(p2);
     cout<<"P3 =";
     p3.show();
     p3.setx(9);
     cout<<"p2 =";
     p2.show();
     cout<<"P3 =";
     p3.show();
     p1=p2;
     p1.sety(18);
     cout<<"P1 =";
     p1.show();
     cout<<"P2 =";
     p2.show();
     ThreeDPoint dp1,dp2(3,5,7);
     cout<<"dp1 =";
     dp1.display();
     cout<<"dp2 =";
     dp2.display();
     ThreeDPoint dp3=dp2;
     cout<<"dp3 =";
     dp3.display();
     dp3.sety(14);
     dp2.setz(19);
     cout<<"dp2 =";
     dp2.display();
     cout<<"dp3 =";
     dp3.display();
     dp1=dp2;
     cout<<"dp1 =";
     dp1.display();
     dp2.setz(20);
     cout<<"dp1 =";
     dp1.display();
     cout<<"dp2 =";
     dp2.display();
}
