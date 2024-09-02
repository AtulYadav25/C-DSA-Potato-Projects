#include <iostream>
using namespace std;

class Complex{
    int a,b;

    public:
        Complex(void);// Declaration of the Constructor

        void printNumber(void){
            cout<<"The value of a is "<<a<<" and value of b is "<<b<<endl;
        }
};

Complex :: Complex(){
    //This is default constructor function which runs automatically in starting when the class is created;
    a = 20;
    b = 10;

}

int main(){
    Complex c1;

    c1.printNumber();
};

/*
Learned About Constructors. How they work with classes. 
This Constructors run automatically when the class object is created.
No need to call the function to run.

It should be declared in public part of the class only
This Constructor Functions do not return values or have any return type
This can have default arguments.
*/