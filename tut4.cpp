#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee Kriti;
    struct employee Raj;
    Kriti.eId = 1;
    Kriti.favChar = 'K';
    Kriti.salary = 1200000;
    Raj.eId = 2;
    Raj.favChar = 'R';
    Raj.salary = 500000;
    cout <<"The Value is " << Kriti.eId << endl
         <<"The Value is " << Kriti.favChar << endl
         <<"The Value is " << Kriti.salary << endl<<endl;
 
    cout <<"The Value is " << Raj.eId << endl
         <<"The Value is " << Raj.favChar << endl
         <<"The Value is " << Raj.salary << endl;
    return 0;
}