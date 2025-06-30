#include <iostream>
#include <vector>

using namespace std;


    /* <----------------------- DAY-12 -----------------------> */

    // multiplicative Persistence number.

vector<int> findDigits(int n)
{
    vector<int> v1;

    for(;n > 0;)
    {
        v1.push_back(n % 10);
        n /= 10;
    }
    return v1;
}

int findPersistence(int n)
{

    if(n < 10)
    {
        return 0;
    }

    vector<int> v1 = findDigits(n);
    int ans = 1;

    for(int value : v1)
    {
        ans *= value;
    }

    return 1 + findPersistence(ans);
    
}


int main ()
{
    cout<<"this is it ..."<<endl;
    int n;
    cin>>n;
    int result = findPersistence(n);
    cout<<"The number of persistence required for number "<<n<<" is : "<<result<<endl;

    return 0;
}