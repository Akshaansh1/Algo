#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;

        cin>>str;
        string a,b;

        if(str.length() % 2 != 0)
        {
            cout<<"NO"<<endl;
        }

        

        else
        {
            for(int i=0;i<str.length()/2;i++)
            {
                a += str[i];
            }

            for(int i=str.length()/2;i<str.length();i++)
            {
                b += str[i];
            }

            if(a == b)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}