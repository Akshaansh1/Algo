#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string str;

        cin>>str;

        int ctr = 0;

        if(str.length() <= 10)
        {
            cout<<str<<endl;
        }

        else{
            for(int i=1;i<str.length()-1;i++)
            {
                ctr++;
            }

            cout<<str[0]<<ctr<<str[str.length()-1]<<endl;
        }
    }
}