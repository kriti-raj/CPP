#include <iostream>
using namespace std;
int glob = 5; 
void sum()
{
    cout<<"sum"<<glob;
}

int main()
{
    int glob = 9;
    glob = 543;
    int a, b;
    cout<<"Enter the value of a:\t";
    cin>>a;
    cout<<"Enter the value of b:\t";
    cin>>b;
    float pi = 3.14;
    char c = 'u';
    sum();
    bool boolean = true;
    cout<<"\n"<<glob<<"\t"<<boolean<<"\n";
    cout<<"This is tutorial number 2. \nHere the value of a is "<<a<<".\nThe value of b is "<<b;
    cout<<".\nThe value of pi is "<<pi;
    cout<<".\nThe value of c is "<<c<<".";
    return 0;
}