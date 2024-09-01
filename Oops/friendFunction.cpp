#include <iostream>
using namespace std;

class Complex{
    int a,b;

    public:
        void setValues(int value1, int value2){
            a = value1;
            b = value2;
        };

        //Syntax to assign the function as friend
        friend Complex sumComplex(Complex o1,Complex o2);

        void printNumber(){
            cout<<"The value is "<<a<<" + "<<b<<"i"<<endl;
        };
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;


    //This friend function has permissions to access the private data of this classes
    o3.setValues((o1.a + o2.a),(o1.b + o2.b));
    return o3;
};

int main(){
    Complex c1,c2, sum;

    c1.setValues(4,1);
    c1.printNumber();
    
    c2.setValues(3,7);
    c2.printNumber();

    //Cannot access sum.sumComplex(c1,c2) as the sumComplex function returns the class o3 and this o3 is cloned to the class 'sum'. Now the o3 values that is set in the sumComplex is set to the 'sum';
    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}



/*
Workflow of the program ><

Learned About Friend Function.
Friend Function helps in accessing the private data / values of the class given.
It is not part of the class but has some permissions by the class for the private data.
It cannot be accessed directly by the class. ie. c1.sumComplex(c1,c2) ---- This is invalid;
*/