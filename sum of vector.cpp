#include <iostream>
#include<string>
#include<vector>

using namespace std;
typedef long long int ll;

ll sum(vector v)
{
    ll i,s=0;
    for(i=0;i<=sizeof(v)/sizeof(v[0]);i++)
    {
        s+=v[i];
    }
}
