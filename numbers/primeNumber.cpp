#include <iostream>
#include <math.h>

using namespace std;

bool checkPrime(int n)
{ 
    if(n < 2) return false;

    if(n == 2) return true;

    if(n % 2 == 0) return false;

    int limit = sqrt(n);

    for(int i = 3; i<= limit; i += 2)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;

}

int main ()
{
    cout<<"this is it ..."<<endl;

    int n;
    cin>>n;
    
    cout<<checkPrime(n)<<endl;

    return 0;
}