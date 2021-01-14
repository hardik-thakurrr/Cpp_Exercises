//Write a C++ program to access the elements of an Array using pointers.
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"\n Enter the Size of Array -> ";
    cin>>n;
    int *p,arr[n];
    p=&arr[n];
    cout<<"\n Enter the Values !! \n";
    for(i=0;i<n;i++)
    {
        cout<<" Arr["<<i<<"] -> ";
        cin>>p[i];
    }
    cout<<"\n Displaying the Values !! \n";
    for(i=0;i<n;i++)
    {
        cout<<" Arr["<<i<<"] -> "<<p[i]<<"\n";
    }
    cout<<endl;
    return 0;
}
