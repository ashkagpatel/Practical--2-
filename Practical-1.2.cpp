#include<iostream>
using namespace std;

class Book
{
private:

    int id;
    string title;
    string author;
    int noc;

public:

    void addbook()
    {
        cout<<"Enter book id: ";
        cin>>id;
        cout<<"Enter title name: ";
        cin>>title;
        cout<<"Enter author name: ";
        cin>>author;
        cout<<"Enter no. of copies: ";
        cin>>noc;
    }

    void issue(int bid)
    {
        if(bid==id && noc>0)
        {
            noc--;
            cout<<"Book issued"<<endl;
        }
    }

    void returnbook(int bid)
    {
        if(id==bid)
        {
            noc++;
            cout<<"Book returned"<<endl;
        }
    }

    void display()
    {
        cout<<"Id is: "<<id<<endl;
        cout<<"Title is: "<<title<<endl;
        cout<<"Author is: "<<author<<endl;
        cout<<"No. of copies: "<<noc<<endl;
    }


};

int main()
{
    int n,id,bid;

    cout<<"Enter no. of books: ";
    cin>>n;

    Book b[20];

    for(int i=0;i<n;i++)
    {
        cout<<" Book "<<i+1<<endl;
        b[i].addbook();
    }

    cout<<"Enter book id to issue: ";
    cin>>id;
    for(int i=0;i<n;i++)
    {
        b[i].issue(id);
    }

    cout<<"Enter book id to return: ";
    cin>>id;
    for(int i=0;i<n;i++)
    {
        b[i].returnbook(id);
    }

    cout<<"Book list"<<endl;
    for(int i=0;i<n;i++)
    {
        b[i].display();
    }

return 0;
}


