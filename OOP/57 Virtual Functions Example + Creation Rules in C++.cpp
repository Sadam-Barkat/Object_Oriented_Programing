#include<iostream>
using namespace std;

class CWH
{
	protected:
		string title;
		float ratting;
	public:
		CWH(string s, float r)
		{
			title = s;
			ratting = r;
		}
	   virtual void display(){
	    	cout<<"This is a Base class display function!"<<endl;
		}
};
class CWHvideo : public CWH
{
	protected:
		float videolenght;
	public:
		CWHvideo(string s, float r, float vl):CWH(s,r)
		{
			videolenght = vl;
		}
		void display(void)
		{
		    cout<<"This is an amazing video with tittle "<<title<<endl;
			cout<<"Rattings "<<ratting<<" Out of 5 stars "<<endl;
			cout<<"This lenght of video is "<<videolenght<<" minutes"<<endl;
		}
};
class CWHtext : public CWH
{
	protected:
		int words;
	public:
		CWHtext(string s, float r, int wc):CWH(s,r)
		{
			words = wc;
		}
		void display(void)
		{
			cout<<"This is an amazing video with tittle "<<title<<endl;
			cout<<"Rattings "<<ratting<<" Out of 5 stars"<<endl;
			cout<<"No of words in this text tutorial is "<<words<<" words"<<endl;
		}
};

int main(){
	string title;
	float ratting, vlen;
	int words;
	
	//for code with Harry video tutorial
	title = "Django tutorial";
	vlen = 4.56;
	ratting = 4.89;
	CWHvideo Djvideo(title,vlen,ratting);
//	Djvideo.display();
	
	//for code with Harry Text tutorial
	title = "Django tutorial text";
	words = 433;
	ratting = 4.5;
	CWHtext Djtext(title,ratting,words);
//	Djtext.display();
   
	CWH*p[2];
	p[0] = &Djvideo;
	p[1] = &Djtext;
	p[0]->display();
	p[1]->display();
	
	return 0;
}
//Rules for virtual function :
//1.They cannot be static
//2.They are accessed by object pointers
//3.Virtual funtion can be friends of another class
//4.Virtual function in base class might not be used
//5.If a virtual function defined in base class then there are no need to redefining it in drived class











