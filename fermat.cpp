#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

ll power(ll x, ull y, ull m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y / 2, m) % m;
    p = (p * p) % m;

    return (y % 2 == 0) ? p : (x * p) % m;
}

void modInverse(ll a, ll m)
{
    if (gcd(a, m) != 1)
        cout << "a is multiple of m";

    else {
        cout << power(a, m - 2, m);
    }
}

ll main()
{
    ll a,m;
    cin>>a>>m;
    modInverse(a, m);
    return 0;
}
