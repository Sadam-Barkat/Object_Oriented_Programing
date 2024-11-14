#include<iostream>
using namespace std;
//Forward declaration
class complex;

class calcolator
{
	public:
		int add(int a, int b)
		{
			return (a+b);
		}
		int sumRealcomplex(complex  ,complex);/*Here we just declare the complex and if we define of give o1 and o2 compilor 
		                                        gives us error and sent us message that what is o1 and o2 i dont know you just 
										    	tell me the declaration not a defination */
		int sumcompcomplex(complex , complex);		
};     
class complex
{
	private:
		int a,b;
//       Individually declaring functions as friends:
//		friend int calcolator :: sumRealcomplex(complex , complex );
//		friend int calcolator :: sumcompcomplex(complex , complex );
		
//		Aliter: Declaring entire calcolator class as friends:
		friend class  calcolator ;
	public:
		void setNumber(int n1, int n2)
		{
			a = n1;
			b = n2;
		}
		void printNumber(){
			cout<<"The number is : "<<a<<"+"<<b<<"i"<<endl;
		}
};
int calcolator :: sumRealcomplex(complex o1, complex o2){
	           return (o1.a+o2.a);
}
int calcolator :: sumcompcomplex(complex o1 , complex o2){
	           return (o1.b+o2.b);
}

int main(){
	complex o1,o2;
	o1.setNumber(1,4);
	o2.setNumber(5,7);	
	
	calcolator calc;
	int resultR = calc.sumRealcomplex(o1,o2);
	cout<<"The sum of real part of o1 and o2 is : "<<resultR<<endl;
	int resultC = calc.sumcompcomplex(o1,o2);
	cout<<"The sum of complex part of o1 and o2 is : "<<resultC;
	return 0;
}
