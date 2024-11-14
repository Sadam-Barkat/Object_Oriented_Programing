#include<iostream>
using namespace std;

class complex{

	private:
		int a,b;
	public:
		void setNumber(int n1, int n2){
			a = n1;
			b = n2;
		}
		/*Below lines means that non member  sumcomplex function is allowed to do anything with
		 my private parts(members) */
		friend complex sumcomplex(complex o1, complex o2);
		void printNumber(){			
			cout<<"Your number is = "<<a<<"+"<<b<<"i"<<endl;
		}
};
complex sumcomplex(complex o1, complex o2){/*rememeber that it is not a function of complex class 
                                             it is a friend of complex class*/
	   complex o3;
	   o3.setNumber((o1.a + o2.a) ,(o1.b + o2.b));
	   return o3;
}

int main(){
	complex c1,c2,sum;
	c1.setNumber(1 , 2);
	c2.setNumber(4 , 5);
	c1.printNumber();
	c2.printNumber();
	
    sum=sumcomplex(c1,c2);
    sum.printNumber();
		
	return 0;
}
/*Properties of friend function :
1.Not in the schope of class
2.since it is not in the schope of class, it cannot be called from the objest of that class . c1.sumcomplex==not valid
3.can be invoked(call) without the help of any object
4.usually contains the objects argument as 
5.can be declared inside public or private section of the class
6.it cannot access members directly by their names and need object_name.number_name to access my number



*/














