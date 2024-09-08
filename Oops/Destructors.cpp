#include <iostream>
using namespace std;

int count = 0;
class num{

    public:
        num(){
            cout<<"This is Constructor of object number "<<count<<endl;
            count++;
        };
        ~num(){
            cout<<"This is destructor of object number "<<count<<endl;
            count--;
        };
};

int main(){
    cout<<"Starting from Main"<<endl;
    num n1,n2;
    {
        cout<<"Entering the Object Block"<<endl;
        num n3;
        cout<<"Exiting the Object block"<<endl;
    }//Here the destructor runs when the object block is ended.

    cout<<"Exit";

};

/*
Output 
Starting from Main
This is Constructor of object number 0
This is Constructor of object number 1
Entering the Object Block
This is Constructor of object number 2
Exiting the Object block
This is destructor of object number 3
ExitThis is destructor of object number 2
This is destructor of object number 1
*/

/*
Learned About Destructors.
Destructors are used to delete or remove unused memory or to actually reset the class object.
It is not called automatically by the compiler if the class object is not in use further.
It is denoted by using '~' before the class name for the destructor function.

Also Learned About Objects/Blocks.
These have local scope of variables and is only bounded with those variables.
*/