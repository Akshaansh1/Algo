#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int N = n+1;
    int nsum= N*(N+1)/2;

    for(int i=0;i<n;i++)
    {
        nsum -=arr[i];
    }

    cout<<nsum;

    return 0;

}