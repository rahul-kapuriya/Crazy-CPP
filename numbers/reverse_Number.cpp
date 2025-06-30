#include <iostream>

using namespace std;


    /* <----------------------- DAY-10 -----------------------> */

    // reverse_number.


void reverse(int n)
{
    int newNumber  = 0;

    while (n != 0)
    {
        int digits = n % 10;
        newNumber = newNumber*10 + digits;
        n /= 10;
    }

    cout<<"Reverse number is : "<<newNumber<<endl;
}

int main ()
{
    cout<<"this is it ..."<<endl;

    int n;
    cin>>n;
    reverse(n);

    return 0;
}