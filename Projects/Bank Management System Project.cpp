#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Bank
{
	private:
		char name[100],address[100],y;
		float balance;
	public:
		void Open_Account();
		void Deposite_Money();
		void Withdraw_Money();
		void Display_Account();    
};
void Bank :: Open_Account()
{
	cout<<"Enter Your Name : ";
	cin.ignore();
	cin.getline(name,100);
	cout<<"Enter Your Address : ";
	cin.ignore();
	cin.getline(address,100);
	cout<<"What type of Accout you want to open saving (s) or current (c) : ";
	cin>>y;
	cout<<"Enter Your amount for deposite : ";
	cin>>balance;
	cout<<"Yor Account has been created! "<<endl;
}
void Bank :: Deposite_Money()
{
	int deposite;
	cout<<"Enter how much you deposite : ";
	cin>>deposite;
	balance=balance+deposite;
	cout<<"Total amount you deposite : "<<balance<<endl;
}
void Bank :: Withdraw_Money()
{
	float withdraw;
	cout<<"******Withdraw******"<<endl;
	cout<<"Enter the amount to withdraw : ";
	cin>>withdraw;
	balance=balance-withdraw;
	cout<<"The total amount left in your account : "<<balance<<endl;
}
void Bank :: Display_Account()
{
	cout<<"Your full name : "<<name<<endl;
	cout<<"Your address : "<<address<<endl;
	cout<<"Type of account that you open : "<<y<<endl;
	cout<<"Amount you deposite : "<<balance<<endl;
}
int main(){
	Bank obj;
	int option,x;
    
    do
    {
	cout<<"1) Open Account "<<endl;
    cout<<"2) Deposite Money "<<endl;
    cout<<"3) Withdraw Money "<<endl;
    cout<<"4) Display Account "<<endl;
    cout<<"5) Exit "<<endl;
    cout<<"Select the option : ";
    cin>>option;
    switch(option)
    {
    	case 1:
    		cout<<"1) Open Account "<<endl;
    		obj.Open_Account();
    		system("cls");
    		break;
    	case 2:
    		cout<<"2) Deposite Money "<<endl;
    		obj.Deposite_Money();
    		system("cls");
    		break;
    	case 3:
    		cout<<"3) Withdraw Money "<<endl;
    		obj.Withdraw_Money();
    		system("cls");
    		break;
    	case 4:
		    cout<<"4) Display Account "<<endl;
			obj.Display_Account();
			system("cls");
			break;
		case 5:
		    if(option==5)	
		    {
		    	exit(1);
			}
		default:
		    cout<<"This is not exist try again!"<<endl;	
	}
	cout<<"Do you want to continue or not then press (Y/N) "<<endl;
    x=getch();
    if(x=='N'||x=='n')
    exit(0);
}while(x=='Y'||x=='y');
    system("pause");
	getch();
	return 0;
}

