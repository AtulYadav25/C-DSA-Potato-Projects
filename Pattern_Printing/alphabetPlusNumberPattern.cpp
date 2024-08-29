#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter A Number: \n";
    cin >> a;
    bool isTypingNumber = true;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            isTypingNumber ? cout << j : cout << char(j + 64);
        }
        isTypingNumber = !isTypingNumber;
        cout << "\n";
    }
}