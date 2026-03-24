#include<iostream>
using namespace std;

int recursivesum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return arr[n-1] + recursivesum(arr,n-1);

    }
}

int iterativesum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Iterative sum= "<<iterativesum(arr,n)<<endl;
    cout<<"Recursive sum= "<<recursivesum(arr,n)<<endl;
return 0;
}
