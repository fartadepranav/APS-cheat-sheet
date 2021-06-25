#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;

int main()
{
    ll val[1000000]={0},n,ans[1000000]={0};
    cin>>n;
    if (n==0)
    {
        cout<<"0";
    }
    else if (n==1)
    {
        cout<<val[0];
    }
    else if (n==2)
    {
        cout<< max(val[0],val[1]);
    }
    else
    {
        ans[0]=val[0];
        ans[1]=max(val[0],val[1]);

        for(int i=2;i<n;i++)
        {
            ans[i] = max(val[i]+ans[i-2], ans[i-1]);
        }

        cout<<ans[n-1];
    }
    return 0;
}
