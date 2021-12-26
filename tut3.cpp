#include<iostream>
using namespace std;

int a = 45;

int main()
{
    int a;
    cout<<"Enter a number:\t";
    cin>>a;
    cout<<"Local a is:\t"<<a<<endl;
    cout<<"Global a is:\t"<<::a;

    return 0;
}