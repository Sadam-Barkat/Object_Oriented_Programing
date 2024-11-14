#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

//Note:
//Syntax of drived class:
//class{{name of Drived class}} : {{visibility mode}} {{name of Base class}}
// 1.Default visibility is private 
// 2.If visibility Public : public members of base class are public in drived class
// 3.If visibility Private: public members of base class are private in drived class
// 4.Private members are never inherited

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

