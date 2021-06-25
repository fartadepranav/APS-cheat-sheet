#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while(t)
	{
	    ll ans,n,x,k,mod;
	    cin>>n>>x>>k;
	    if(x!=0)
	    {
	        mod = (n+1)%k;
	        if(x%k==0 || x%k==mod)
	        {
    	        cout<<"YES"<<"\n";
	        }
	        else
    	    {
	            cout<<"NO"<<"\n";
	        }
	    }
	    else
	        cout<<"YES"<<"\n";
	    t--;
	}
	return 0;
}
