#include<iostream>
#include<cmath>
using namespace std;

class Loan
{

private:

    int id;
    string name;
    double loan_amount;
    double air;
    double loan_month;

public:

    Loan()
    {
        id=0;
        name="shiv";
        loan_amount=0;
        air=0;
        loan_month=0;
    }

    Loan(int idn,string n,double l,double a,double m)
    {
        id=idn;
        name=n;
        loan_amount=l;
        air=a;
        loan_month=m;
    }


    void getdata()
    {
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter loan amount: ";
    cin>>loan_amount;
    cout<<"Enter annual interest rate: ";
    cin>>air;
    cout<<"Enter loan month: ";
    cin>>loan_month;
    }

    double emi()
    {
                double r=air/(12*100);
                double e=(loan_amount*r*pow(1+r,loan_month))/(pow(1+r,loan_month)-1);
                return e;
    }

    void display()
    {
        double e=emi();;
        cout<<"Id is: "<<id<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"loan amount is: "<<loan_amount<<endl;
        cout<<"annual interest rate is: "<<air<<endl;
        cout<<"loan month is: "<<loan_month<<endl;
        cout<<"Monthly EMI is: "<<e<<endl;
    }

};
int main()
{
    Loan l[3];
 //Loan l[3]={{101,"rahul",2000,20,3},{102,"shiv",1000,10,2},{103,"deep",2000,10,3}};
 for(int i=0;i<3;i++)
    {
       l[i].getdata();
        cout<<endl;
    }
 for(int i=0;i<3;i++)
    {
        l[i].display();
        cout<<endl;
    }
}
