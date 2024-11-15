#include<iostream>
using namespace std;

class point
{
	public:
		int x;
		int y;
	public:
		point():x(0),y(0){}
		point(int a,int b)
		{
			x=a;
			y=b;
		}

		void setxy(int a, int b)
		{
			x=a;
			y=b;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
		point getxy()
		{
			return point (x,y);
		}
		void display(void)
		{
			cout<<" x :"<<x<<endl;
			cout<<" y :"<<y<<endl;
		}
};
class shape
{
	private:
		string color;
	public:
		shape()
		{
			color="White";
		}
		shape(string c)
		{
			color=c;
		}
		void setcolor(string c)
		{
			color=c;
		}
		string getcolor()
		{
			return color;
		}
		virtual void draw()=0;
};
class line : public shape
{
	protected:
		point start;
		point end;
	public:
		line()
		{
			start=point();
			end=point();
		}
		line(point p1, point p2)
		{
			start=p1;
			end=p2;
		}
		void setstart(point p1)
		{
			start=p1;
		}
		void setend(point p2)
		{
			end=p2;
		}
		point getstart()
		{
			return start.getxy();
		}
		point getend()
		{
			return end.getxy();
		}
};
class dottedline : public line
{
	public:
		dottedline():line(){}
		dottedline(point p1, point p2):line(p1, p2){}
		void draw()
		{
			cout<<"The doted line start from "<<"("<<start.getx()<<","<<start.gety()<<")"
			<<"And end at "<<"("<<end.getx()<<","<<end.gety()<<")"<<" with color "<<getcolor()<<endl;
		}
};
class solidline : public line
{
	public:
		solidline():line(){}
		solidline(point p1, point p2):line(p1, p2){}
		void draw()
		{
			cout<<"The solid line start from "<<"("<<start.getx()<<","<<start.gety()<<")"
			<<"And end at "<<"("<<end.getx()<<","<<end.gety()<<")"<<" with color "<<getcolor()<<endl;
		}
};
class circle : public shape
{
	private:
		point center;
		int radius;
	public:
		circle():center(0,0),radius(0){}
		circle(point p, int r)
		{
			center=p;
			radius=r;
		}
		point setcenter(point p)
		{
			center=p;
		}
		void setradius(int r)
		{
			radius=r;
		}
		point getcenter()
		{
			return center.getxy();
		}
		int getradius()
		{
			return radius;
		}
		void draw()
		{
		cout<<"The center of the circle is "<<"("<<center.getx()<<","<<center.gety()<<")"
		<<" and radius is "<<radius<<" with color "<<getcolor()<<endl;
		}
};
class rectangle : public shape
{
	private:
		point lefttop,righttop,leftbottom,rightbottom;
	public:
		rectangle():lefttop(0,0),righttop(0,0),leftbottom(0,0),rightbottom(0,0){}
		rectangle(point p1, point p2, point p3, point p4)
		{
			lefttop=p1;
			righttop=p2;
		    leftbottom=p3;
		    rightbottom=p4;
		}
	    point setrectangle(point p1, point p2, point p3, point p4)
		{
			lefttop=p1;
			righttop=p2;
		    leftbottom=p3;
		    rightbottom=p4;
		}
		point getlefttop()
		{
			return lefttop.getxy();
		}
		point getrighttop()
		{
			return righttop.getxy();
		}
		point getleftbottom()
		{
			return leftbottom.getxy();
		}
		point getrightbottom()
		{
			return rightbottom.getxy();
		}
		void draw()
		{
			cout<<"The Rectangle start from "<<"("<<lefttop.getx()<<","<<lefttop.gety()<<")"<<"("<<righttop.getx()<<","<<righttop.gety()<<")"
			<<"And Rectangel end at "<<"("<<leftbottom.getx()<<","<<leftbottom.gety()<<")"<<"("<<rightbottom.getx()<<","<<rightbottom.gety()<<")"
			<<" with color "<<getcolor()<<endl;
		}
};
int main(){
	
	point p1,p2,p3(10,40),p4(70,40),p5(10,60),p6(70,60);
	dottedline dl1(p1,p4);
	solidline sl1(p2,p6);
	circle c1(p3,80),c2(p5,50),c3(p6,30);
	rectangle r1(p3,p4,p5,p6);
	dl1.setcolor("red");
	c3.setcolor("green");
	shape* shape[6];
	shape[0]=&dl1;
	shape[1]=&sl1;
	shape[2]=&c1;
	shape[3]=&c2;
	shape[4]=&c3;
	shape[5]=&r1;
	
	for(int i=0; i<6; i++)
	{
		shape[i]->draw();
	}
	
	return 0;
}
