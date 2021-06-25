#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;

ll bino(ll n, ll k)
{
    if(k==0 || n==k)
    {
        return 1;
    }
    return bino(n-1,k-1)+bino(n-1,k);
}

int main()
{
    ll n,k;
    cin>>n>>k;
    ll ans =bino(n,k);
    cout<<ans;
    return 0;
}
