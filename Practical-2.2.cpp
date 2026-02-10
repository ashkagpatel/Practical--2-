#include<iostream>
#include<string>
using namespace std;

class Student
{
private:

    int rollno;
    string name;
    int marks[3];

public:

    Student()
    {
        rollno=1;
        name="anjali";
        for(int i=0;i<3;i++)
        {
            marks[i]=100;
        }

    }

    Student(int r,string n,int m1,int m2,int m3)
    {
        rollno=r;
        name=n;
        marks[0]=m1;
        marks[1]=m2;
        marks[2]=m3;
    }

    void getdata()
{

        cout<<"Enter student rollno: ";
        cin>>rollno;
        cin.ignore();
        cout<<"Enter student name: ";
        getline(cin,name);
        cout<<"Enter student marks of three subject: ";
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }

}

    void putdata()
    {
        cout<<"Data of student marks: "<<endl;
        cout<<"Student roll no is: "<<rollno<<endl;
        cout<<"Student name is: "<<name<<endl;
        cout<<"Student marks: "<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<marks[i]<<endl;
        }
        cout<<"Average is: "<<averagemarks()<<endl;


    }

    int averagemarks()
    {
       return (marks[0]+ marks[1] +marks[2])/3;
    }
};
int main()
{
    Student s[3];

    cout<<"Default constructor called: "<<endl;
    cout<<"Details of student marks: "<<endl;
    for(int i=0;i<3;i++)
    {
        s[i].putdata();
    }

    cout<<"User provided input values: "<<endl;
    cout<<"student record: "<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<"Student"<<i+1<<endl;
        s[i].getdata();


    }

    for(int i=0;i<3;i++)
    {
        cout<<"Student"<<i+1<<endl;
        s[i].putdata();


    }
return 0;
}
