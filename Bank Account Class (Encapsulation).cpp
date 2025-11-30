#include<iostream>
using namespace std;
class BankAccount{
    string accountNumber="123kbl";
    float balance=1000;
    public:
    void deposit(){
        float amount=0;
        cout<<"\nEnter the deposited amount: ";
        cin>>amount;
        balance=balance+amount;
    }
    void withdraw(){
        float amount=0;
        cout<<"\nEnter the withdrawal amount: ";
        cin>>amount;
        if(amount<=balance){
        balance=balance-amount;
        }
        else
        {
            cout<<"Insufficient balance";
        }
    }
};
int main(){
    BankAccount Yahya;
    int choice;
    do
    {
        cout<<"\n================================================================";
        cout<<"\nEnter '1' for deposit and '2' for withdrawl and '3' to cancel: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            Yahya.deposit();
            break;

            case 2:
            Yahya.withdraw();
            break;
        }

    } while (choice!=3);
    cout<<"\nThankyou for choosing our bank ";
    return 0;
}
