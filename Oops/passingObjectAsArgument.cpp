#include<iostream>
using namespace std;

class complex_class {
    int a;
    int b;

    public:
     void setData(int value1, int value2){
        a = value1;
        b = value2;
     };

     void setDataByObject(complex_class o1,complex_class o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
     };

     void printData(){
        cout<<a<<endl;
        cout<<b<<endl;
     };
};

int main(){

   complex_class myclass1,myclass2,myclass3;

   int value1,value2;
   cout<<"Enter a number\n";
   cin>>value1; 
   cout<<"Enter a number\n";
   cin>>value2;

   myclass1.setData(value1,value2) ;
   myclass3.setData(15,65);
   myclass1.printData();

   myclass2.setDataByObject(myclass1,myclass3);
   myclass2.printData();
}