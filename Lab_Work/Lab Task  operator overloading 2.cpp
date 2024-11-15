#include<iostream>
using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		Point()
		{
			x=0;
			y=0;
		}
		Point(int a, int b)
		{
			x=a;
			y=b;
		}
		Point setdata(int a, int b)
		{
			x=a;
			y=b;
		}
		Point getdata()
		{
			return Point (x,y);
		}
		Point inputdata()
		{
			cout<<"Enter the value of X : ";
			cin>>x;
			cout<<"Enter the value of Y : ";
			cin>>y;
		}
		void display(void)
		{
			cout<<"X : "<<x<<endl;
			cout<<"Y : "<<y<<endl;
		}
		Point operator ++()//pre increment
		{
		    return Point (x++,y++);
		}
		Point operator ++(int)//post increment
		{
		   return Point (++x,++y);
			
		}
		Point operator --()//pre decrement
		{
			return Point (x--,y--);
		}
		Point operator --(int)//post decrement
		{
		return Point (--x,--y);
		}
		Point operator +(Point obj) 
		{
			Point temp;
			temp.x=x+obj.x;
			temp.y=y+obj.y;
			return temp;
		}
		Point operator -(Point obj) 
		{
			Point temp;
			temp.x=x-obj.x;
			temp.y=y-obj.y;
			return temp;
		}
		Point operator *(Point obj) 
		{
			Point temp;
			temp.x=x*obj.x;
			temp.y=y*obj.y;
			return temp;
		}
		Point operator /(Point obj) 
		{
			Point temp;
			temp.x=x/obj.x;
			temp.y=y/obj.y;
			return temp;
		}
		void operator =(Point obj)
		{
			x=obj.x;
			y=obj.y;
		}
		void operator +=(Point obj)
		{
		    x=x+obj.x;
		    y=y+obj.y;
		}
		void operator -=(Point obj)
		{
		    x=x-obj.x;
		    y=y-obj.y;
		}
		void operator *=(Point obj)
		{
		    x=x*obj.x;
		    y=y*obj.y;
		}
		void operator /=(Point obj)
		{
		    x=x/obj.x;
		    y=y/obj.y;
		}
		bool operator <(Point obj)
		{
			if(x<obj.x & y<obj.y)
			{
				return true;
			}
			else
			{
			    return false;
			}
		}
			bool operator >(Point obj)
		{
			if(x>obj.x & y>obj.y)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
			bool operator <=(Point obj)
		{
			if(x<=obj.x & y<=obj.y)
			{
				return true;
			}
			else
			{
				return false;
		    }
		}
			bool operator >=(Point obj)
		{
			if(x>=obj.x & y>=obj.y)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
			bool operator !=(Point obj)
		{
			if(x!=obj.x & y!=obj.y)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
			bool operator ==(Point obj)
		{
			if(x==obj.x & y==obj.y)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main(){
	Point c1(2,3),c2(4,6),c3,c4;
//	c3=c2+c1;
//	c3.display();
//	c3=c1/c4;
//	c3.display();    
//	c4=++c3;
//    c3.getdata();
//    c4.getdata();
//	c4=c1--;
//	c1.display();
//	c4.display();
//	c3=c2-c1;
//	c3.display();
//	c2.display();
//	c1.display();
   if(c1!=c2)
    c1.display();
	else
	c2.display();
//	c1+=c2;
//	c1.display();
//	c2.display();
	return 0;
}
