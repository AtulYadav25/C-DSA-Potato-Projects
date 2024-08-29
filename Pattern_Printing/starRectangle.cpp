#include<iostream>
using namespace std;

int main(){
  int noOfStar;
  cout<<"Enter A Number: \n";
  cin>>noOfStar;
  for (int i = 0; i < noOfStar; i++)
  {
    for (int j = 0; j < noOfStar; j++)
    {
        cout<<"*";
    }
    cout<<"\n";
    
  }
  
    
}