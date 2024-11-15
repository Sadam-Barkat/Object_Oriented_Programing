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
class line1 : public shape
{
	protected:
		point start;
		point end;
	public:
		line1():start(0,0),end(0,0){}
		line1(point p1, point p2)
		{
			start=p1;
			end=p2;
		}
		line1(point p1, point p2, string c):shape(c)
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
class dottedline1 : public line1
{
	public:
		dottedline1():line1(){}
		dottedline1(point p1, point p2):line1(p1,p2){}
		dottedline1(point p1, point p2, string c):line1(p1,p2,c){}
		void draw()
		{
			cout<<"Dottedline start from "<<"("<<start.getx()<<","<<start.gety()<<")"
			<<"and end at "<<"("<<end.getx()<<","<<end.gety()<<")"<<" with color "<<getcolor()<<endl;
		}
};
class solidline1 : public line1
{
	public:
		solidline1():line1(){}
		solidline1(point p1, point p2):line1(p1,p2){}
		solidline1(point p1, point p2, string c):line1(p1,p2,c){}
		void draw()
		{
			cout<<"Solidline start from "<<"("<<start.getx()<<","<<start.gety()<<")"
			<<"and end at "<<"("<<end.getx()<<","<<end.gety()<<")"<<" with color "<<getcolor()<<endl;
		}
};
class circle1 : public shape
{
	private:
		point center;
		int radius;
	public:
		circle1():center(0,0),radius(0){}
		circle1(point p1, int r)
		{
			center=p1;
			radius=r;
		}
		circle1(point p1, int r, string c):shape(c)
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
class rectangle1 : public shape
{
	private:
	point lefttop,righttop,leftbottom,rightbottom;
	public:
		rectangle1():lefttop(0,0),righttop(0,0),leftbottom(0,0),rightbottom(0,0){}
	    rectangle1(point p1,point p2, point p3 , point p4)
	    {
	    	lefttop=p1;
	    	righttop=p2;
	    	leftbottom=p3;
	    	rightbottom=p4;
		}
	    rectangle1(point p1,point p2, point p3 , point p4,string c):shape(c)
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
	int count=0, input;
	string color;
	shape *sp[5];
	
	cout<<"*****Well Come To The Shpes Drawing Software*****"<<endl;
	cout<<"*********************Menue***********************"<<endl;
	cout<<"You can draw 5 different shapes "<<endl;
	
	do
	{
		cout<<"Enter 1: To darw rectangle "<<endl;
		cout<<"Enter 2: To draw circle    "<<endl;
		cout<<"Enter 3: To draw dottedline"<<endl;
		cout<<"Enter 4: To draw solidline "<<endl;
		cout<<"Enter your choise "<<endl;
		cin>>input;
		
		switch(input)
		{
			case 1:
				int toprightx,toprighty,topleftx,toplefty,rightbottomx,rightbottomy,leftbottomx,leftbottomy;
				system("cls");
				cout<<"Enter x and y for topright corner "<<endl;
				cin>>toprightx>>toprighty;
				system("cls");
				cout<<"Enter x and y for topleft corner "<<endl;
				cin>>topleftx>>toplefty;
				system("cls");
				cout<<"Enter x and y for bottomright corner "<<endl;
				cin>>rightbottomx>>rightbottomy;
				system("cls");
				cout<<"Enter x and y for bottomleft corner "<<endl;
				cin>>leftbottomx>>leftbottomy;
				system("cls");
				cout<<"Enter the color "<<endl;
				cin>>color;
				system("cls");
				sp[count] = new rectangle1(point(toprightx,toprighty),
				                          point(topleftx,toplefty),
				                          point(rightbottomx,rightbottomy),
										  point(leftbottomx,leftbottomy),
										  color);
				cout<<"The reuired shape is "<<endl;
				sp[count]->draw();
				count++;
				break;
				
			case 2:
				int centerx, centery, r;
				system("cls");
				cout<<"Enter the x and y of circle "<<endl;
				cin>>centerx>>centery;
				system("cls");
				cout<<"Enter the radius of circle "<<endl;
				cin>>r;
				system("cls");
				cout<<"Enter the color of circle "<<endl;
				cin>>color;
				system("cls");
				sp[count]=new circle1(point(centerx,centery),r,color);
				cout<<"The required shpe is "<<endl;
				sp[count]->draw();
				count++;
				break;
			
			case 3:
			    int dleftx,dlefty,drightx,drighty;
			    system("cls");
				cout<<"Enter the starting x and y of dottedline "<<endl;
				cin>>dleftx>>dlefty;
				system("cls");
				cout<<"Enter the ending x and y of dottedline "<<endl;
				cin>>drightx>>drighty;
				system("cls");
				cout<<"Enter the color of dotted line "<<endl;
				cin>>color;
				system("cls");
				sp[count]=new dottedline1(point(dleftx,dlefty),point(drightx,drighty),color);
				cout<<"The required shape is "<<endl;
				sp[count]->draw();
				count++;
				break;
				
			case 4:
			    int sleftx,slefty,srightx,srighty;
			    system("cls");
				cout<<"Enter the starting x and y of solidline "<<endl;
				cin>>sleftx>>slefty;
				system("cls");
				cout<<"Enter the ending x and y of solidline "<<endl;
				cin>>srightx>>srighty;
				system("cls");
				cout<<"Enter the color of solidline "<<endl;
				cin>>color;
				sp[count]=new solidline1(point(sleftx,slefty),point(srightx,srighty),color);
				cout<<"The required shape is "<<endl;
				sp[count]->draw();
				count++;
				break;	
		}
	}while(count !=5);
	
	for(int i=0; i<5; i++)
	{
		sp[i]=NULL;
	}
	system("pause");
	return 0;
}
