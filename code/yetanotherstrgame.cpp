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

        for(int i=0;i<str.length();i++)
        {
            if(i%2 == 0)
            {
                if(str[i] != 'a')
                {
                    str[i] = 'a';
                }
                else{
                str[i] = 'b';
                }
            }

            else{
                if(str[i] != 'z'){
                    str[i] = 'z';
                }

                else{
                    str[i] = 'y';
                }
            }
        }

        cout<<str<<endl;
    }
}