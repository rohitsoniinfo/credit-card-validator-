//this is a simple cpp program to illustrate the use of stol() function
// stol= string to long
#include <iostream>
using namespace std;
int main()
{
    string number="123456789";
    int a = stol(number);
    cout<<a;

}