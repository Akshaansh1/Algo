#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool ord(ll n) {
    int prevDigit = -1; 

    if (n < 10) {
        return true;
    }

    while (n != 0) {
        ll currentDigit = n % 10;
        if (prevDigit != -1 && currentDigit != prevDigit) {
            return false; 
        }
        prevDigit = currentDigit;
        n = n / 10;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

int ctr =0;

        for(ll i=1;i<=n;i++)
        {
            if(ord(i)){
                ctr++;
            }
        }

        cout<<ctr<<endl;
    }


}