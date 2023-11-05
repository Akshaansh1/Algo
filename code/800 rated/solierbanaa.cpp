#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int k,w;
    ll n;
    cin>>k>>n>>w;
    int sum = 0;

    for(int i=1;i<=w;i++)
    {
        sum += k*i;
    }
    if(sum > n)
    {
        cout<<sum-n;
    }
    else
    {
        cout<<0;
    }
    return 0;
}