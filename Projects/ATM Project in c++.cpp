#include<iostream>
using namespace std;

class user
{
	private:
		string name;
		string password;
		float balance=0;
	public:
		user(string n, string p)
		{
			name=n;
			password=p;
		}
		bool checkpassword(string p)
		{
			if(p==password)
			{
				return true;
			}
			else
			{
				cout<<"Invalid Password!"<<endl;
				return false;
			}
		}
			bool checkname(string n)
			{
				if(n==name)
				{
					return true;
				}
				else
				{
					cout<<"Invalid Name!"<<endl;
					return false;
				}
			}
		void deposite()
		{
			float dp;
			cout<<"Enter the amount to deposite "<<endl;
			cin>>dp;
			balance=balance+dp;
		}
		void withdraw()
		{
			float wd;
		   cout<<"Enter the amount to withdraw "<<endl;
		   cin>>wd;
			   if(wd>balance)
				{
			    	cout<<"Insuficiant Amount! "<<endl;
				}
				else
				{
			     balance=balance-wd;
		    }
		}
		void displaybalance(void)
		{
			cout<<balance<<endl;
		}	
};
int startmenu()
{
	cout<<"**************Main Menue***************"<<endl;
	cout<<" 1-Balance "<<endl;
	cout<<" 2-Deposite "<<endl;
	cout<<" 3-Withdraw "<<endl;
	cout<<" 4-Exit "<<endl;
	cout<<" selection :";
	int option;
	cin>>option;
	
	return option; 
}
int exit()
{
	cout<<"Thanks sir for using our service!"<<endl;
}
int main(){
	user u1("Sadam","221698");
	
	string n,p;
	
	cout<<"*****Welcome To ATM Application***** "<<endl;
	cout<<"*****Enter Username***** "<<endl;
	cin>>n;
	cout<<"*****Enter Passwprd***** "<<endl;
	cin>>p;
	
	if(u1.checkpassword(p) && u1.checkname(n))
	{
		start:
		int i;
		i=startmenu();
		switch(i)
		{
			case 1:
				{
				cout<<"Your current acount Balace is : ";
				u1.displaybalance();
				cout<<endl;
				break;
		    	}
			case 2:
				{
					u1.deposite();
					break;
				}				
			case 3:
				{
					u1.withdraw();
					break;
				}
			case 4:
				{
					break;
				}
			case 5:
				{
					cout<<"would you like to continue: ";
					int i;
					cin>>i;
					if(i==1)
					{
						goto start;
					}
					else
					{
						exit();
					}
				}
		}
	}
	else
	{
		cout<<"unauthorised person";
	}
	
	cout<<"Would you like to continue!"<<endl;
	cout<<" 1- Yes "<<endl;
	cout<<" 2- No "<<endl;
	cout<<" Selectioin "<<endl;
	
	int in;
	cin>>in;
	if(in==1)
	{
	 system("cls");
	 main();
	 }
	 else if(in==2)
	 {
	 	system("cls");
	     exit();
	 }
	 system("pause");
	
	return 0;
}
