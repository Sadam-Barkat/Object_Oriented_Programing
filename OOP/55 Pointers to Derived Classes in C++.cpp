#include<iostream>
using namespace std;
class Base{
    public:
        int varb;
        void display(){
            cout<<"Dispalying Base class variable : "<<varb<<endl;
        }
};

class Derived : public Base{
    public:
            int vard;
            void display(){
                cout<<"Dispalying Base class variable    : "<<varb<<endl;
                cout<<"Dispalying Derived class variable : "<<vard<<endl;
            }
};
int main(){
    Base *bp;
    Base objb;
    Derived objd;
    bp = &objd; // Pointing base class pointer to derived class

//  bp->vard= 134; // Will throw an error
    bp->varb = 34;
    bp->display();
    bp->varb = 35; 
    bp->display();

    Derived *dp;
    dp = &objd;
    dp->varb = 10;
    dp->vard = 20;
    dp->display();

    return 0;
}

