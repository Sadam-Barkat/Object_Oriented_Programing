#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}
//                        publicaly inherited    protected inheritance   private inheritance  object         
//
//public members:         Accessible             Accessible              Accessible            Yes 
//protected members:      Accessible             Accessible              Accessible             No
//private members:        Not Accessible         Not Accessible          Not Accessible         No
	
