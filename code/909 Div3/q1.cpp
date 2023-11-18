#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    if(t>=1 && t<=100)
    {

    while(t--){
        int n;
        cin>>n;

        if(n%3 == 0){
            cout<<"Second"<<endl;
        }

        else{
            cout<<"First"<<endl;
        }
    }
    }
    return 0;
}