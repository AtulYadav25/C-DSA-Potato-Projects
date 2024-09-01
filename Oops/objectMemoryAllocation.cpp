#include<iostream>
using namespace std;

class Shop {
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
        void initCounter (void){ counter = 0;};
        void setPrice(void){
            cout<<"Enter Id of the Item number "<<counter<<endl;
            cin>>itemId[counter];
            cout<<"Enter Price of the Item"<<endl;
            cin>>itemPrice[counter];
            counter++;
        }
        void displayPrice(void);
};

void Shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of the Item Id"<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main(){
    cout<<"Hellow";

    Shop store;
    store.initCounter();
    store.setPrice();
    store.setPrice();
    store.setPrice();
    store.displayPrice();
    return 0;
}