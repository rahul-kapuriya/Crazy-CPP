#include <iostream>
#include <vector>

using namespace std;


    /* <----------------------- DAY-12 -----------------------> */

    // Additive Persistence number.


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
    vector<int> v1 = findDigits(n);
    int ans = 0;

    if(n < 10)
    {
        return n;
    }

    for(int value : v1)
    {
        ans += value;
    }

    return findPersistence(ans);

}

int main ()
{
    cout<<"this is it ..."<<endl;
    int n;
    cin>>n;
    int result = findPersistence(n);
    cout<<"The additive persistence of "<<n<<" is : "<<result<<endl;

    return 0;
}