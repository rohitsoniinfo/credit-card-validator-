//this is the simple cpp program to illustrate the use of substr function

//substr = substring of string 
#include<iostream>
using namespace std;
int main()
{
    string name="rohitsoni";
    string l = name.substr(0,2);
    //substr() function take two argument first argument is the starting index of string 
    //and second argument is the length of the substring 
    cout<<l;
    cout<<endl;
    
    
    
    string a = name.substr(0,10);
    cout<<a;

    return 0;

}