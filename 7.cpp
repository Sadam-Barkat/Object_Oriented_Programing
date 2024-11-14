#include<iostream>
using namespace std;

class cat
{
    private:
    	string color;
    	float weight;
    	
    public:
    	void setcolor(string c)
    	{
    		color = c;
		}
		void setweight(float w)
		{
			weight = w;
		}
		string getcolor()
		{
			return color;
		}
		float getweight()
		{
			return weight;
		}
		void input()
		{
			cout<<"Enter the color of cat:";
			cin>>color;
			cout<<"Enter the weight of cat:";
			cin>>weight;
			cout<<endl;
		}
		void display()
		{
			cout<<"The colour of cat is :"<<color<<endl;
			cout<<"The weight of cat is :"<<weight<<endl;
		}
};

int main(){
	cat c1, c2, c3;
	c1.input();
	c2.input();
	c3.input();
	c1.display();
	c2.display();
	c3.display();

	
	return 0;
}
