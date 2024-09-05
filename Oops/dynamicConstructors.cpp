#include<iostream>
using namespace std;

class BankDeposit{
    int principle, time;
    float rate;
    float returnValue;

    public:
        // This is Default constructor
        BankDeposit() {}

        // Constructor with integer rate (r as percentage)
        BankDeposit(int p, int y, int r);

        // Constructor with float rate like 0.04
        BankDeposit(int p, int y, float r);

        void show();
};

// Constructor with integer rate
BankDeposit :: BankDeposit(int p, int y, int r) {
    principle = p;
    time = y;
    rate = float(r) / 100;  // Converting percentage to decimal
    returnValue = principle;

    for(int i = 0; i < time; i++) {
        returnValue = returnValue * (1 + rate);  // Compound interest calculation
    }
}

// Constructor with float rate
BankDeposit :: BankDeposit(int p, int y, float r) {
    principle = p;
    time = y;
    rate = r;  // Rate is already in decimal format
    returnValue = principle;

    for(int i = 0; i < time; i++) {
        returnValue = returnValue * (1 + rate);
    }
}


void BankDeposit :: show() {
    cout << "Principle amount was: " << principle
         << "\nReturn value after " << time << " years is: " << returnValue << endl;
}

int main() {

    BankDeposit bd1, bd2;
    int p,y,R;
    float r;

    cout<<"Enter Values (Rate in Float) \n ";
    cin>>p>>y>>r;

    bd1 = BankDeposit(p,y,r);  
    bd1.show();


    cout<<"Enter Values (Rate in integer) \n";
    cin>>p>>y>>R;

    bd2 = BankDeposit(p,y,R);
    bd2.show();

    return 0;
}
