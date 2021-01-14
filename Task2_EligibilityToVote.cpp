//Write a C++ program where we check if a person is eligible to vote or not.

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"\n Enter Your Age -> ";
    cin>>age;
    if(age<18)
    {
        cout<<"\n You are Not Eligible For Voting !!";
    }
    else
    {
        cout<<"\n You are Eligible For Voting !!";
    }
    cout<<endl;
    return 0;
}
