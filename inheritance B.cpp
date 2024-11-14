#include<iostream>
using namespace std;

class Base
{
	private:
		int bpri;
	protected:
		int bpro;
	public:
		int bpub;
		Base(){
			bpri = 1;
			bpro = 2;
			bpub = 3;
		}
		void bdisplay(){
			cout<<bpri<<endl<<bpro<<endl<<bpub<<endl;
		}
	
};
class Drive:public Base
{
	private:
		int dpri;
    protected:
    	int dpro;
    public:
    	int dpub;
    	Drive(){
    		dpri = 4;
    		dpro = 5;
    		dpub = 6;
		}
		void ddisplay(){
		cout<<bpri<<endl<<bpro<<endl<<bpub<<endl;
		}
};

int main(){
	Base B;
	B.getfun();
	cout<<B.bpri<<endl;
	cout<<B.bpro<<endl;
	cout<<B.bpub<<endl;
	
	Drive D;
	D.ddisplay();
	cout<<D.dpri<<endl;
	cout<<D.dpro<<endl;
	cout<<D.dpub<<endl;
	
	
	return 0;
}
