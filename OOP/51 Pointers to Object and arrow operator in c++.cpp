#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is      : "<< real<<endl;
            cout<<"The imaginary part is : "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *p = new Complex;
//  (*p).setdata(1,54);
//  (*p).getdata();
    
    p->setData(1, 54);
    p->getData(); 

    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    p1->setData(1, 4); 
    p1->getData();
    return 0;
}

