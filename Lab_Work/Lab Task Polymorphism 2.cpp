#include<iostream>
using namespace std;

class point
{
	private:
		int x,y;
	public:
		point():x(0),y(0){}
		point(int a, int b)
		{
			x=a;
			y=b;
		}
		void setx(int a)
		{
			x=a;
		}
		void sety(int b)
		{
			y=b;
		}
		void setxy(int a ,int b)
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
			return point(x,y);
		}
		void display(void)
		{
			cout<<"X : "<<x<<endl<<"Y"<<y<<endl;
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
		line():start(0,0),end(0,0){}
		line(point p1, point p2)
		{
			start=p1;
			end=p2;
		}
		line(point p1, point p2, string c):shape(c)
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
			return point (start);
		}
		point getend()
		{
			return point (end);
		}
};
class dottedline : public line
{
	public:
		dottedline():line(){}
		dottedline(point p1, point p2):line(p1,p2){}
		dottedline(point p1, point p2, string c):line(p1,p2,c){}
		void draw()
		{
			cout<<"Dottedline start from "<<"("<<start.getx()<<","<<start.gety()<<")"
			<<"and end at "<<"("<<end.getx()<<","<<end.gety()<<")"<<" with color "<<getcolor()<<endl;
		}
};
class solidline : public line
{
	public:
		solidline():line(){}
		solidline(point p1, point p2):line(p1,p2){}
		solidline(point p1, point p2, string c):line(p1,p2,c){}
		void draw()
		{
			cout<<"Solidline start from "<<"("<<start.getx()<<","<<start.gety()<<")"
			<<"and end at "<<"("<<end.getx()<<","<<end.gety()<<")"<<" with color "<<getcolor()<<endl;
		}
};
class circle : public shape
{
	private:
		point center;
		int radius;
	public:
		circle():center(0,0),radius(0){}
		circle(point p1, int r)
		{
			center=p1;
			radius=r;
		}
		circle(point p1, int r, string c):shape(c)
		{
			center=p1;
			radius=r;
		}
		void setcenter(point p1)
		{
			center=p1;
		}
		void setradius(int r)
		{
			radius=r;
		}
		point getcenter()
		{
			return point(center);
		}
		int getradius()
		{
			return radius;
		}
		void draw()
		{
			cout<<"Circle start from "<<"("<<center.getx()<<","<<center.gety()<<")"
			<<" and radius "<<radius<<" with color "<<getcolor()<<endl;
		}		
};
class rectangle : public shape
{
	private:
	point lefttop,righttop,leftbottom,rightbottom;
	public:
		rectangle():lefttop(0,0),righttop(0,0),leftbottom(0,0),rightbottom(0,0){}
	    rectangle(point p1,point p2, point p3 , point p4)
	    {
	    	lefttop=p1;
	    	righttop=p2;
	    	leftbottom=p3;
	    	rightbottom=p4;
		}
	    rectangle(point p1,point p2, point p3 , point p4,string c):shape(c)
	    {
	    	lefttop=p1;
	    	righttop=p2;
	    	leftbottom=p3;
	    	rightbottom=p4;
		}
		void setrectangle(point p1, point p2, point p3, point p4)
		{
			lefttop=p1;
			righttop=p2;
			leftbottom=p3;
			rightbottom=p4;
		}
		point getleft() { return lefttop.getxy(); }
        point getright() { return righttop.getxy(); }
        point getleftb() { return leftbottom.getxy(); }
        point getrightb() { return rightbottom.getxy(); }

		void draw()
		{
			cout<<"The Rectangle start from "<<"("<<lefttop.getx()<<","<<lefttop.gety()<<")"<<"("<<righttop.getx()<<","<<righttop.gety()<<")"
			<<"And Rectangel end at "<<"("<<leftbottom.getx()<<","<<leftbottom.gety()<<")"<<"("<<rightbottom.getx()<<","<<rightbottom.gety()<<")"
			<<" with color "<<getcolor()<<endl;
		}
};


int main(){
	point p1,p2,p3(10,50),p4(70,50),p5(10,80),p6(70,80),p7(100,50),p8(100,80);
	p1.setx(7);
	p2.sety(9);
	dottedline dl1,dl2(p1,p5),dl3(p2,p4,"Green");
	solidline sl1,sl2(p3,p7),sl3(p4,p8,"Yellow");
	circle c1,c2(p6,30),c3(p7,50,"Red");
	rectangle r1,r2(p3,p4,p5,p6),r3(p4,p6,p7,p8,"Orange");
	
	shape* sp[12];
	sp[0]=&dl1;
	sp[1]=&dl2;
	sp[2]=&dl3;
	sp[3]=&sl1;
	sp[4]=&sl2;
	sp[5]=&sl3;
	sp[6]=&c1;
	sp[7]=&c2;
	sp[8]=&c3;
	sp[9]=&r1;
	sp[10]=&r2;
	sp[11]=&r3;
	
	for(int i=0; i<12; i++)
	{
		sp[i]->draw();
	}
	
	return 0;
}
