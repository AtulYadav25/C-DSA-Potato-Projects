#include<iostream>
using namespace std;

int main(){
    // Print 
    int a;
    cout<<"Enter A Number: \n";
    cin>>a;
    for(int i = 1;i <= a;i++){
        for (int j = 0; j < i; j++)
        {
            cout<<i+j;
        }
        cout<<"\n";
        
    }
}