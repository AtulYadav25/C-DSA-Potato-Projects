#include<iostream>
using namespace std;

//Global Variable
int count = 0;

//This is Base Class / Parent Class
class Employee{

    public:
        int id;
        float salary;
        //Constructor
        Employee(float getSalary){
            id = count;
            count++;
            salary = getSalary;
        };
        Employee(){};
        void fire(void);
};

void Employee :: fire(void){
            cout<<"The Employee with Id"<<id<<"is Fired!"<<endl;
};
/*
Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/

//This is Derived Class
class Programmer: public Employee{
    public:
        int languageCode;

        Programmer(int getLanguageCode){
            languageCode = getLanguageCode;
             id = count;
            count++;
        };

        void sayHello(){
            cout<<"Hellow I am Programmer with Id"<<id<<endl;
        }
};

//This is Derived Class
class Clerk: public Employee{
    public:
        int clerkId;
        Clerk(int getClerkId){
            clerkId = getClerkId;
             id = count;
            count++;
        };

        void introduce(){
            cout<<"I am clerk with Clerk Id"<<clerkId<<endl;
        };
};

int main(){
    Employee atul(1500.54), Sheri(1400.58);
    Programmer champ(0),senior(9);
    Clerk harry(54);

    //All Classes have common function here
    atul.fire(); //From Employee
    champ.fire(); //From Programmer
    harry.fire(); //From Clerk

    //Programmer class has parent class properties + its own properties;
    champ.sayHello();
    harry.introduce();
};


/*
Learned About Inheritence in C++

In this the new class created is linked to a parent class, in which whole public properties of the parent class are present in the child class.

Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

If the Visibility mode is private then all public properties of the parent class is set as the private properties of the child class.

In this case the parent class is employee and child classes are Programmer and clerk.
*/