#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        float arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int sum  = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }

        float avg = sum/n;

        if(avg == 1){
            cout<<0<<endl;
        }

    }
}