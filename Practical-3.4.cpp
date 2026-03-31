#include <iostream>
using namespace std;

template <typename T>
T fmax(T arr[],int n)
{
    T max = arr[0];
    for(int i=1;i < n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

template <typename T>
void revarray(T arr[],int n)
{
    for(int i=0;i<n/2;i++)
    swap(arr[i],arr[n-i-1]);
}

template <typename T>
void display(T arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<< endl;
}

int main()
{
    int iarr[] = {3,1,5,2};
    float farr[] = {3.2,5.6,2.3,1.2};
    char carr[] = {'a','y','b','s'};

    int n = 4;

    cout<<"Integer:"<<endl;
    display(iarr,n);
    cout<<"Max: "<<fmax(iarr,n)<<endl;
    revarray(iarr,n);
    display(iarr,n);

    cout<<"Float:"<<endl;
    display(farr,n);
    cout<<"Max: "<<fmax(farr,n)<<endl;
    revarray(farr,n);
    display(farr,n);

    cout<<"Character:"<<endl;
    display(carr,n);
    cout<<"Max: "<<fmax(carr,n)<<endl;
    revarray(carr,n);
    display(carr,n);

    return 0;
}
