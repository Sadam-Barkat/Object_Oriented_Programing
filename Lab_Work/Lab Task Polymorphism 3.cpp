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
  int count = 0, userInput, i = 0;
  int size;
  int rcount, ccount, dlcount, slcount;
  cout << "Enter total shapes count: ";
  cin >> size;
  cout << "Enter rectangle count :";
  cin >> rcount;
  cout << "Enter circle count :";
  cin >> ccount;
  cout << "Enter dotted line count :";
  cin >> dlcount;
  cout << "Enter solid line count :";
  cin >> slcount;
  if(size!=rcount+ ccount+ dlcount+ slcount)
  {
  	cout<<"Not valid number shapes\n";
  	return 0;
  }
  int shapesCount[4] = {rcount, ccount, dlcount, slcount};
  string color;
  
  shape **s=new shape*[size];
  cout << "Welcome to Shape Program\n";
  cout << "Menu\n";
  cout << "You can draw "<<size<<" shapes\n";
 
  while (i < 4)
  {
   if (shapesCount[i] == 0) 
   {
      i++;
      continue;
    } else {
      shapesCount[i]--;
      userInput = i + 1;
    }

    switch (userInput)
	{
    case 1:
      int leftx, lefty, rightx, righty, leftbottomx, leftbottomy, rightbottomx,
          rightbottomy;
      cout << "********Rectangle Input:******** \n";
      cout << "Enter x and y for top left line\n";
      cin >> leftx >> lefty;
      cout << "Enter x and y for top right line\n";
      cin >> rightx >> righty;
      cout << "Enter x and y for bottom left line\n";
      cin >> leftbottomx >> leftbottomy;
      cout << "Enter x and y for bottom right line\n";
      cin >> rightbottomx >> rightbottomy;
      cout << "enter color of rectangle\n";
      cin >> color;
      s[count] = new rectangle(point(leftx, lefty), point(rightx, righty),
                               point(leftbottomx, leftbottomy),
                               point(rightbottomx, rightbottomy), color);
      count++;
      break;
    case 2:
      int pointx, pointy, rad;
      cout<<"********Circle Input*******\n";
      cout << "Enter x and y for circle\n";
      cin >> pointx >> pointy;
      cout << "Enter its radius\n";
      cin >> rad;
      cout << "Enter color of the circle\n";
      cin >> color;
      s[count] = new circle(point(pointx, pointy), rad, color);
      count++;
      break;
    case 3:
      int lx, ly, rx, ry;
      cout<<"**********Dotted line Input**********\n";
      cout << "Enter left x and y for dotted line\n";
      cin >> lx >> ly;
      cout << "Enter right x and y for dotted line\n";
      cin >> rx >> ry;
      cout << "Enter the color of dotted line\n";
      cin >> color;
      s[count] = new dottedline(point(lx, ly), point(rx, ry), color);
      count++;
      break;
    case 4:
      int lfx, lfy, rtx, rty;
      cout<<"***********Solid line Input**************\n";
      cout << "Enter left x and y for solid line\n";
      cin >> lfx >> lfy;
      cout << "Enter right x and y for solid line\n";
      cin >> rtx >> rty;
      cout << "Enter the color of solid line\n";
      cin >> color;
      s[count] = new solidline(point(lfx, lfy), point(rtx, rty), color);
      count++;
      break;
    default:
      cout << "Invalid choice";
    }
  }
  cout<<"The shapes you entered are:\n";
  for (int i = 0; i < size; i++)
  {
    s[i]->draw();
  }
	
	return 0;
}
