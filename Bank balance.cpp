#include <iostream>
#include <string>
using namespace std;

class Bank{
    public:
    char name[50];
    string account_number;
    void setdata(){
        cout<<"Enter your user name : ";
        cin>>name;
        cout<<"Enter your account number : ";
        cin>>account_number;
    }
};

class Bankacct{
    public:
    int number;
    int withdrawal;
    int deposite;
    int account_balance;
    void getdata(){
        cout<<"Enter your account balance : ";
        cin>>account_balance;
        
        cout<<"What do you want to do : "<<endl;
        cout<<"1. Deposite"<<endl;
        cout<<"2. Withdrawal"<<endl;
        cin>>number;
        switch(number){
            case 1: cout<<"Deposite"<<endl;
                    cout<<"How much do you want to deposite : "<<endl;
                    cin>>deposite;
                    break;
            case 2: cout<<"Withdrawal"<<endl;
                    cout<<"How much do you want to withdrawal : "<<endl;
                    cin>>withdrawal;
                    break;
            default:cout<<"Invalid Number"<<endl;
            break;
        }
    }
    void withdrawalAmount(){
        account_balance = account_balance - withdrawal;
    }
    void depositeAmount(){
        account_balance = account_balance + deposite;
    }
};

class siri : public Bank, public Bankacct{
    public:
    void displaydata(){
        cout<<endl;
        cout<<"User Name is : "<<name<<endl;
        cout<<"User Account number is : "<<account_number<<endl;
        cout<<"User Account balance is : "<<account_balance<<endl;
        if(number == 1) {
            cout << "Deposited: " << deposite << endl;
        } else if(number == 2) {
            cout << "Withdrawn: " << withdrawal << endl;
        }
        cout<<"Total Balance : "<<account_balance<<endl;
        cout<<endl;
    }
};

int main()
{
    siri Okay;
    Okay.setdata();
    Okay.getdata();
    if (Okay.number == 1) 
    {
        Okay.depositeAmount();
    } else if (Okay.number == 2) 
    {
        Okay.withdrawalAmount();
    }
    Okay.displaydata();
    
    return 0;
}
