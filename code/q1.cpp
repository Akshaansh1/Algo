#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin>>w;

    if(w>=1 && w<=100)
    {
        if(w%2 == 0 && w != 2)
        {
            cout<<"YES"<<endl;
        }
        if(w%2 != 0)
        {
            cout<<"NO"<<endl;
        }

        if(w==2)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}