#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        
        ll n;
        cin>>n;

        ll arr[n];

        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }

        

        if(n == 2){
            ll m = arr[0];
            for(int i=0;i<n;i++){
                m = min(m , arr[i]);
            }
            cout<<m<<endl;
        }

        else if(n > 2){
            ll mx = arr[0];
            ll mn = arr[0];

            for(ll i=0;i<n;i++){
                mx = max(mx , arr[i]);
                mn = min(mn , arr[i]);
            }
            cout<<mx-mn<<endl;
        }

        ll sum = 0;
        for(ll i=0;i<n;i++){
            sum += arr[i];
            }

            cout<<sum<<endl;

        
    }
    return 0;
}