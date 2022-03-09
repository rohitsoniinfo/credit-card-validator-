//this is a simple program for checking the validation of credit card numebr 
//we are going to use the luh's algorithm here 
#include <iostream>
using namespace std;


//return this numeber if it is a single digit,otherwise 
//return the sum of two digit 
int getDigit(int number)
{
    if(number<9)
    {
        return number;
    }
    return number/10+number%10;
}




//return the number of digits in d
int getSize(long long int  d)
{
    string num = to_string(d); //https://www.geeksforgeeks.org/stdto_string-in-cpp/
    return num.length();
}



//return the first k number of digits from number 
//if the number of digits in number is less than k
//return number 
long getPrefix(long long int number, int k)
{
    if (getSize(number)>k)
    {
        string num = to_string(number);
        return stol(num.substr(0,k));
    }
    return number;
}


//return true if the digit d is prefix for number 
bool prefixMatched(long long int number, int d)
{
    return getPrefix(number,getSize(d))==d;
}



//get the result from step 2 *this is the code from the gfg*
//what i have observed in this code that we are adding the double of odd places 

int sumOfDoubleEvenPlace(long long int number)
{
    int sum=0;
    string num = to_string(number);

    for(int i=getSize(number)-2; i>=0; i-=2)
    {
        sum+=getDigit(int(num[i]-'0')*2);
    }
    return sum;
}

//return sum of odd place digit in number
int sumOfOddPlace(long long int number)
{
    int sum=0;
    string num=to_string(number);
    for(int i=getSize(number)-1; i>=0; i-=2)
    {
        sum+=num[i]-'0';
    }
    return sum;
}

//return true if the card is valid 
bool isValid(long long int number)
{
    return (getSize(number)>=13 && getSize(number)<=16) && (prefixMatched(number,4) || prefixMatched(number,5) || prefixMatched(number, 37) || prefixMatched(number, 6)) && ((sumOfDoubleEvenPlace(number)+sumOfOddPlace(number))%10==0);
}


int main()
{
    long long int number = 374245455400126;
    cout<<getSize(number)<<endl;
    cout<<sumOfDoubleEvenPlace(number)<<endl;
    cout<<sumOfOddPlace(number)<<endl;
    cout<<isValid(number)<<endl;    

    return 0;
}


//name of the functions which are used in this code
/* 
1. getDigit()
2. getSize()
3. getPrefix()
4. prefixMatched()
5. sumOfDoubleEvenPlace()
6. sumOfOddPlace()
7. isValid()
*/

