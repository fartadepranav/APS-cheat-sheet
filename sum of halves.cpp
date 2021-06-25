#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int h,p,sum=0;
        cin>>h>>p;
        while(p)
        {
            sum+=p;
            p=p/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
