#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int n;
        cin>>n;
        int flag = 1;

        int arr[2*n];

        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<2*n;i=i+2)
        {
            if((arr[i] + arr[i+1]) % 2 != 0)
            {
                flag = 0;
            }
            else{
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}