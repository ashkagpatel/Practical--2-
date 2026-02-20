#include<iostream>
using namespace std;

class Item
{
private:

    int item_id;
    string name;
    float price;
    int quantity;

public:

   Item()
    {
        item_id=0;
        name="null";
        price=0;
        quantity=0;
    }

    Item(int id,string n,float p,int q)
    {
        item_id=id;
        name=n;
        price=p;
        quantity=q;
    }

    /*void getdata()
    {
        cout<<"Item id is: ";
        cin>>item_id;

        cout<<"Item name is: ";
        cin>>name;

        cout<<"Item price is: ";
        cin>>price;

        cout<<"Item quantity : ";
        cin>>quantity;
    }
    */


    void adds(int q)
    {
        quantity=quantity+q;
        cout<<quantity;
    }

    void sell(int q)
    {
        if(quantity>=q)
        {
            cout<<"Items are sold: "<<endl;
            quantity=quantity-q;
            cout<<"Total quantity of items are: "<<quantity<<endl;
        }
        else
        {
            cout<<"Items are not in the stock: "<<endl;
        }
    }

    void display()
    {
        cout<<"Item id is: "<<item_id<<endl;
        cout<<"Item name is: "<<name<<endl;
        cout<<"Item price is: "<<price<<endl;
        cout<<"Items quantity are: "<<quantity<<endl;
    }
};

int main()
{
    //Item it[3];
    Item it[3]={{101,"pen",10,20},{102,"pencil",5,100},{103,"book",50,100}};

    int q;

        for(int i=0;i<3;i++)
        {
            cout<<"Item "<<i+1<<" "<<endl;
            //it[i].getdata();
            it[i].display();
            cout<<"enter quantity to add: ";
            cin>>q;
            it[i].adds(q);
            cout<<endl;
            cout<<"enter quantity to sell: ";
            cin>>q;
            it[i].sell(q);
            cout<<endl;
        }

        cout<<"Final details of items: "<<endl;
        for(int i=0;i<3;i++)
        {
             cout<<"Item "<<i+1<<" "<<endl;
             it[i].display();
        }

return 0;
}


