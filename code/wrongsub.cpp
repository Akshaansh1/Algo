#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    int k;
    cin>>n>>k;

    while(k--)
    {
        int rem=0;
        rem = n%10;

        if(rem == 0)
        {
            n = n/10;
        }

        else{
            n = n-1;
        }
    }
    cout<<n;
}