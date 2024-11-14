#include<iostream>
using namespace std;

class engine
{
	private:
		int capacity;
		int model;
	public:
		engine():capacity(0),model(0){}
		engine(int ca, int mo)
		{
			capacity=ca;
			model=mo;
		}
		void setdata(int ca, int mo)
		{
			capacity=ca;
			model=mo;
		}
		int getdatac()
		{
			return (capacity);
		}
		int getdatam()
		{
			return (model);
		}
};
class car
{
	private:
		string name;
		engine obj;
	public:
		car()
		{
			name="";
			obj.setdata(0,0);
		}
		car(string n,int ca,int mo)
		{
		    name=n;
		    obj.setdata(ca,mo);
		}
		void setdata(string n, int ca, int mo)
		{
			name=n;
			obj.setdata(ca,mo);
		}
		void getdata(void)
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Capacity : "<<obj.getdatac();
			cout<<endl;
			cout<<"Model : "<<obj.getdatam();
			cout<<endl;
		}
};

int main(){
	car c1("Mehran",2023,700),c2;
	c1.getdata();
	c2.setdata("Corola",2023,1000);
	c2.getdata();
	
	
	return 0;
}
