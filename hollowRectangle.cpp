#include <iostream>
using namespace std;
int main()
{
    int l;
    int b;
    cout << "Enter A Length: \n";
    cin >> l;
    cout << "Enter A Breadth: \n";
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            if (j == l)
            {
                cout<<"*"<<"\n";
            }
            
            if(i == 1 || j == 1 || i== b ){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}