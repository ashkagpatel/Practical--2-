#include<iostream>
using namespace std;

class Shape
{
public:
    float r;

    void getr()
    {
        cin>>r;
    }
};
class Circle:public Shape
{
public:
    float a;

    void display_area()
    {
        a=3.14*r*r;
        cout<<"Area of the circle is: ";
        cout<<a<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter number of circles: ";
    cin>>n;

    Circle c[100];

    cout<<"Static method: "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter radius for circle "<<i+1<<": ";
        c[i].getr();
    }

    cout<<"Areas: "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Circle "<<i+1<<": ";
        c[i].display_area();
    }

    Circle *d=new Circle[n];

    cout<<"Dynamic method: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter radius for circle "<<i+1<<": ";
        d[i].getr();
    }

    cout<<"Areas: "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Circle "<<i+1<<": ";
        d[i].display_area();
    }

    delete[] d;
return 0;
}
