#include<iostream>
using namespace std;

class Wallet
{
private:

    int walletid;
    string username;
    float curbal;
    int amount;

public:

    /*Wallet(int id,string name,float balance)
    {
        walletid=id;
        username=name;
        curbal=balance;
    }
    */


    void data()
    {
    cout<<"Enter Wallet no: ";
    cin>>walletid;
    cout<<"Enter Account holder's name: ";
    cin>>username;
    cout<<"Enter intial Balance: ";
    cin>>curbal;
    }


    void deposit(int amount)
    {
        curbal=curbal+amount;
        cout<<"Amount Deposit successfully:"<<endl;
        cout<<"New balance is: "<<curbal<<endl;
    }

    void withraw(int amount)
    {
        if(amount<=curbal)
        {
            curbal=curbal-amount;
            cout<<"Amount withdraw successfully:"<<endl;
        }
        else
        {
            cout<<"Insufficient balance:"<<endl;
        }
        cout<<"New balance is: "<<curbal<<endl;
    }


    void transfer(Wallet &receiver,int amount)
    {
        if(amount<=curbal)
        {
          curbal=curbal-amount;
          receiver.curbal=receiver.curbal+amount;
          cout<<"Transfer successful from "<<username<<" to  "<<receiver.username<<endl;
        }
        else
        {
         cout<<"Transfer failed!Insufficient balance: "<<endl;
        }
    }

    void display()
    {
      cout<<"walletid is: "<<walletid<<endl;
      cout<<"Name is: "<<username<<endl;
      cout<<"Current balance is: "<<curbal<<endl;
    }
};

int main()
{
   Wallet w1,w2;

    w1.data();
    w2.data();

   // Wallet w1(1,"Ashka",12000);
    //Wallet w2(2,"Bhavna",8000);

    w1.display();
    w2.display();

    w1.deposit(2000);
    w1.withraw(1000);

    w1.transfer(w2,6000);

    w1.display();
    w2.display();

 return 0;
}
