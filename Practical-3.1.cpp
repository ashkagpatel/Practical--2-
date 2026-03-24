#include<iostream>
using namespace std;
class Employ
{
private:

    string name;
    float salary;
    float bamount;

public:

    Employ(string n,float s,float ba=2000)
    {
        name=n;
        salary=s;
        bamount=ba;
    }

    inline float total()
    {
      return salary+bamount;
    }

    void display()
    {
        cout<<"Employ name is: "<<name<<endl;
        cout<<"Employ's basic salary: "<<salary<<endl;
        cout<<"Employ's bonus is: "<<bamount<<endl;
        cout<<"Employ's total salary is: "<<total()<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter number of employ: ";
    cin>>n;
    Employ *e[3];

    for(int i=0;i<n;i++)
    {
      string name;
      float salary,bamount;
      int choice;
      cout<<"Enter employ's name: ";
      cin>>name;
      cout<<"Enter employ's salary: ";
      cin>>salary;
      cout<<"1.Default bonus: "<<endl<<"2.Custom bonus: "<<endl;

      cout<<"Enter choice: ";
      cin>>choice;

      if(choice==1)
      {
         e[i] = new Employ(name,salary);
      }
      else
      {
          float bonus;
          cout<<"Bonus: ";
          cin>>bonus;
          e[i] = new Employ(name,salary,bonus);
      }
    }
    cout<<"Display employ details: "<<endl;
    for(int i=0;i<n;i++)
    {
        e[i]->display();
    }
return 0;
}




