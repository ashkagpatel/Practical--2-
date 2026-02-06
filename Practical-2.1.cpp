#include<iostream>
using namespace std;

class Rectangle
{
private:
    float length,width;

public:

    void setlength(float l)
    {
        if(l>0)
        {
            length=l;
        }
        else
        {
            cout << "Invalid input! Length must be positive.";
            length=0;
        }
    }

    void setwidth(float b)
    {
        if(b>0)
        {
            width=b;
        }
        else
        {
            cout << "Invalid input! Width must be positive.";
            width=0;
        }
    }

    float area()
    {
        return length*width;
    }

    float perimeter()
    {
        return  2*(length+width);
    }

    int issquare()
    {
       if(length==width)
       {
         return 1;
       }
       else
       {
           return 0;
       }
    }

    void compare(Rectangle r)
    {
        if (area() > r.area())
        {
            cout << "This(1) rectangle has larger area.\n";
        }
        else if(area() < r.area())
        {
            cout << "Other(2) rectangle has larger area.\n";
        }
        else
        {
            cout << "Both rectangles have equal area.\n";
        }
    }


    void display()
    {
        cout<<"The area of a rectangle is: "<<area()<<endl;
        cout<<"The perimeter of a rectangle is: "<<perimeter()<<endl;

        if (issquare() == 1)
        {
            cout << "This rectangle is a square\n";
        }
        else
        {
            cout << "This rectangle is not a square\n";
        }
    }
};

int main()
{
    Rectangle rec[20];

    int n;
    float l,b;

    cout<<"Enter no.of rectangles: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter length of rectangle "<<i+1<<":"<<endl;
        cin>>l;
        cout<<"Enter width of rectangle "<<i+1<<":"<<endl;
        cin>>b;
        rec[i].setlength(l);
        rec[i].setwidth(b);
    }

    for(int i=0;i<n;i++)
    {
        cout<<"Rectangle"<<i+1<<endl;
        rec[i].display();
    }

    if (n >= 2)
    {
        cout << "\nComparison between Rectangle 1 and Rectangle 2:\n";
        rec[0].compare(rec[1]);
    }


return 0;
}
