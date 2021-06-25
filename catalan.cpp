//calculate nth catalan number
#include <iostream>
#include<string>
using namespace std;
typedef long long int ll;

ll catalan(ll n)
{
    if (n <= 1)
        return 1;
    ll res = 0;
    for (int i=0; i<n; i++)
        res += catalan(i)* catalan(n-i-1);
    return res;
}
