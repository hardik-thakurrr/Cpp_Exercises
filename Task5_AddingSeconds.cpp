//Write a C++ program to read time in HH:MM:SS format and convert into total seconds using class
#include<iostream>
using namespace std;

class Time
{
    int hours,minutes,seconds;
    public:
    void getdata();
    void toseconds();
    void display();
};

void Time::getdata()
{
    cout<<"\n Enter the value in Hours -> ";
    cin>>hours;
    cout<<"\n Enter the value in Minutes -> ";
    cin>>minutes;
    cout<<"\n Enter the value in Seconds -> ";
    cin>>seconds;
    cout<<"\n Time is -> "<<hours<<":"<<minutes<<":"<<seconds;
}

void Time::toseconds()
{
    seconds=seconds+(hours*3600)+(minutes*60);
}

void Time::display()
{
    cout<<"\n The Final Value in Seconds is -> "<<seconds;
}

int main()
{
    Time obj;
    obj.getdata();
    obj.toseconds();
    obj.display();
    cout<<endl;
    return 0;
}
