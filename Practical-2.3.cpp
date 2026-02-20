#include<iostream>
using namespace std;

class Account
{
private:

    string name;
    int ac_id;
    float balance;

public:

    Account(string n,int id,float bal)
    {
        name=n;
        ac_id=id;
        balance=bal;
    }

    void deposit(int amount)
    {
       if(amount<0)
        {
           cout<<"Not Validate Amount: "<<endl;
        }
       else
        {
           cout<<"Amount successfully deposit: "<<endl;
           balance=balance+amount;
           cout<<"New balance is: "<<balance<<endl;
        }
    }

    void withdraw(int amount)
    {
       if(balance<amount)
        {
          cout<<"Insufficient balance: "<<endl;
        }
       else
        {
          cout<<"Amount successfully withdraw: "<<endl;
          balance=balance-amount;
          cout<<"New balance is: "<<balance<<endl;
        }
    }

    void display()
    {
        cout<<"Customer name: "<<name<<endl;
        cout<<"Account id: "<<ac_id<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main()
{
    Account a[3]={{"Antara",101,6000},{"Anshmita",102,8000},{"Khushi",103,12000}};

    int choice,amount;

    for(int i=0;i<3;i++)
    {


    cout<<"-----Account detail-----"<<endl;
    cout<<"1. Display details"<<endl;
    cout<<"2. Deposit amount"<<endl;
    cout<<"3. Withdraw amount"<<endl;

    cout<<"Enter a choice: "<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        for(int i=0;i<3;i++)
        {
        cout<<"Account: "<<i+1<<endl;
        a[i].display();
        }

        break;

    case 2:
        for(int i=0;i<3;i++){
        cout<<"Account: "<<i+1<<endl;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        a[i].deposit(amount);
        }
        break;

    case 3:
        for(int i=0;i<3;i++){
        cout<<"Account: "<<i+1<<endl;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        a[i].withdraw(amount);
        }
        break;

    default:
        cout<<"Invalid choice!"<<endl;
    }
    }

return 0;
}
