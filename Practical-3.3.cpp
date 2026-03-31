#include <iostream>
#include <string>
using namespace std;

class Bank
{
private:
    int ac_no;
    string name;
    float balance;
    static int total_account;

public:
    Bank()
    {

    }
    Bank(int no,string n,float bal)
    {
        ac_no = no;
        name = n;
        balance = bal;
        total_account++;
    }

    void data()
    {
        cout << "Account No: ";
        cin >> ac_no;
        cout << "Name: ";
        cin >> name;
        cout << "Balance: ";
        cin >> balance;
    }

    void transfer(Bank &receiver, float amount)
    {
        if (amount<=0)
        {
            cout << "Invalid amount!" << endl;
        }
        else if (amount>balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance=balance-amount;
            receiver.balance=receiver.balance+amount;
            cout << "Transfer successful!" << endl;
        }
    }

    void display()
    {
        cout << "Account No: " << ac_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    static void showTotalAccounts()
    {
        cout << "Total Accounts: " << total_account << endl;
    }
};

int Bank::total_account = 0;

int main()
{
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    Bank b[10];

    for (int i = 0; i < n; i++)
    {
        int ac_no;
        string name;
        float balance;

        cout << "\nEnter details for account " << i + 1 << endl;
        b[i].data();
    }

    float amount;
    cout << "\nEnter amount to transfer from Account 1 to 2: ";
    cin >> amount;


    b[0].transfer(b[1],amount);

    cout << "\nAccount Details:\n";
    for (int i = 0; i < n; i++)
    {
        b[i].display();
    }

    Bank::showTotalAccounts();

    return 0;
}
