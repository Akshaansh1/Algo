#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=0;
    int sum = 0;
    if(n!=0 && n!=1)
    {
        while(n--)
        {
            int a,b;
            cin>>a>>b;

            sum = sum -a + b;
            
            if(sum>k)
            {
                k = sum;
            }
        }

        cout<<k;
    }
    return 0;
}