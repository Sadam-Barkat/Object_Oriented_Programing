#include<iostream>
using namespace std;

class shop
{
	private:
		int itemid[100];
		int itemprice[100];
		int counter;
	public:
	    void intitcounter(void) {counter = 0;};
		void setprice(void);
		void displayprice(void);
};
void shop :: setprice(void){
	cout<<"Enter the id of your item no:"<<counter+1<<endl;
	cin>>itemid[counter];
	cout<<"Enter the price of your item:"<<endl;
	cin>>itemprice[counter];
	counter++;
}
void shop :: displayprice(void){
	for(int i=0; i<counter; i++){
		cout<<"The price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
	}
}
int main(){
	shop dukan;
	dukan.intitcounter();
	dukan.setprice();
	dukan.setprice();
	dukan.displayprice();
	return 0;
}
