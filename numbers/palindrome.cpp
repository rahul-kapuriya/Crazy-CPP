#include <iostream>
#include <vector>

using namespace std;


    /* <----------------------- DAY-10 -----------------------> */

    // Palindrome_number.


void palindrome(int n)
{
    int m = n;
    int reverse = 0;

    while(n != 0)
    {
        int newn = n % 10;
        reverse = reverse*10 + newn;
        n /= 10;
    }

    if(reverse == m)
    {
        cout<<"Number : "<<m<<" is palindrome number."<<endl;
    }
    else
    {
        cout<<"Number : "<<m<<" is not palindrome number."<<endl;
    }

}

int main ()
{
    cout<<"this is it ..."<<endl;
    int n;
    cin>>n;
    palindrome(n);

    return 0;
}