#include<iostream>
using namespace std;

class BankDeposit{
	private:
	int principle;
	int years;
	float intrestrate;
	float returnvalue;
	public:
		BankDeposit(){}
		BankDeposit(int p,int y, float r);//r can be a value like 0.04
		BankDeposit(int p,int y, int r);//r can be a value like 14 
		void show();  
};
BankDeposit :: BankDeposit(int p,int y,float r)
{
	principle = p;
	years = y;
	intrestrate = r;
	returnvalue = principle;
	
	for(int i=0; i<y; i++)
	{
		returnvalue = returnvalue*(1+intrestrate);
	}
}
BankDeposit :: BankDeposit(int p,int y,int r)
{
	principle = p;
	years = y;
	intrestrate = float(r)/100;
	returnvalue = principle;
	
	for(int i=0; i<y; i++)
	{
		returnvalue = returnvalue*(1+intrestrate);
	}
}
void BankDeposit :: show()
{
	cout<<"The Principle value was : "<<principle<<endl;
	cout<<"Return value after "<<years<<" years is : "<<returnvalue<<endl;
}

int main(){
	BankDeposit bd1,bd2,bd3;
	int p, y;
	float r; //It is percentage foam
	int R; // It is decimile foam
	
	cout<<"Enter the value of P : ";
	cin>>p;
	cout<<"Enter the value of Y : ";
	cin>>y;
	cout<<"Enter the value of r : ";
	cin>>r;
	bd1 = BankDeposit(p,y,r);
	bd1.show();
	cout<<endl;
	cout<<"Enter the value of P : ";
	cin>>p;
	cout<<"Enter the value of Y : ";
	cin>>y;
	cout<<"Enter the value of R : ";
	cin>>R;
	bd2 = BankDeposit(p,y,R);
	bd2.show();
	
	return 0;
}
