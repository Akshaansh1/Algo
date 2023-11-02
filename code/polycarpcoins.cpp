#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        ll x;
        cin>>x;

        ll a,b;
        
        a=x/3;
        b=x/3;

        if(x%3 == 1)
        {
            a = a+1;
        }

        if(x%3 == 2)
        {
            b = b + 1;
        }

        cout<<a<<" "<<b<<endl;

    }
    return 0;
}