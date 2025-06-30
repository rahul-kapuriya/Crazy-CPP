#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printDigits(int n)
{
    int sum = 0;
    while(n)
    {
        int digits = n % 10;
        sum += digits;
        n /= 10;
    }

    cout<<sum<<endl;
}

int main ()
{
    cout<<"this is it ..."<<endl;

    int n;
    cin>>n;
    printDigits(n);

    return 0;
}