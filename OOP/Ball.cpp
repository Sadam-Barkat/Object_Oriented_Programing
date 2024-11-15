#include<iostream>
using namespace std;

class Ball
{
	private:
		string color;
		float weight;
		string type;
	public:
		Ball(string c, float w, string t){
			cout<<"This is a constructor!"<<endl;
			color = c;
			weight = w;
			type = t;
		}
		void display(){
			cout<<"The Color of the Ball is : "<<color<<endl;
			cout<<"The Weight of the Ball is: "<<weight<<endl;
			cout<<"The Type of the Ball is  : "<<type<<endl;
			cout<<color<<endl<<weight<<endl<<type<<endl;
		}
		~Ball(){
			cout<<"This is a distructor!"<<cout<<endl;
		}
		void setcolor(string c){
			color = c;
		}
		void setweight(float w){
			weight = w;
		}
		void settype(string t){
			type = t;
		}
		string getcolor(){
			return color;
		}
		float getweight(){
			return weight;
		}
		string gettype(){
			return type;
		}
		void setinput(){
			cout<<"Enter the color : "<<endl;
			cin>>color;
			cout<<"Enter the weight : "<<endl;
			cin>>weight;
			cout<<"Enter the type : "<<endl;
			cin>>type;
		}
	
};
int main(){
	Ball a("White",1.5,"T20");
	a.display();
	a.setcolor("Black");
	a.setweight(2.5);
	a.settype("PSL");
	cout<<a.getcolor();
	cout<<a.getweight();
	cout<<a.gettype();
	a.setinput();
	a.display();
	
	
	return 0;
}
