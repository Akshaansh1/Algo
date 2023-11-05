#include <bits/stdc++.h>
#define ll long long
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;

int main()
{
    int t;
    cin>>t;

    forn(tt,t)
    {
        ll n;
        cin>>n;

        set<int> arr;

        for(int i=0;i*i<=n;i++)
        {
            arr.insert(i*i);
        }

        for(int i=0;i*i*i<=n;i++)
        {
            arr.insert(i*i*i);
        }

        cout<<arr.size()-1<<endl;
    }
}