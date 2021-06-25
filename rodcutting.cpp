#include <iostream>
using namespace std;
typedef long long int ll;

ll max(ll a, ll b, ll c){
    if(a>=b && a>=c)
    {
        return a;
    }
    else if(b>=a && b>=c)
    {
        return b;
    }
    return c;
}

int main()
{
    ll n,i,j,result[100000000]={0};
    cin>>n;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i/2;j++)
        {
            result[i]=max(result[i], j*(i-j), j*result[i-j] );
        }
    }
    return 0;
}
