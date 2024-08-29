#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter A Number \n";
    cin>>a;
    cout<<a;
    
    for (int i = 1; i < a; i++)
    {
        cout<<"Loop"<<a*2<<'\n';
    }
    
}