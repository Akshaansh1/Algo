#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        char str[n];

        cin>>str;
        int flag = 0;
        
        char ch = str[0];
        for(int i=0;i<n;i++){
            if(ch == str[i]){
                flag = 1;
            }
            else{
                if(ch !=str[i]){}
            }
        }

        if(flag == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}