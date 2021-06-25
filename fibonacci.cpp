//nth fibonacci number
ll fibonacci(ll n)
{
    ll i,a=0,b=1;
    if(n<=1)
    {
        cout<<"0"<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<"1" <<endl;
        return;
    }
    else{
        for(int i=0;i<n-2;i++)
        {
            int temp=a+b;
            a = b;
            b = temp;
        }
        cout<<temp<<endl;
    }
}
