#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        char s;
        cin>>s;

        int flag=0;
        const string str="codeforces";

        for(int i=0;str[i]!= '\0' ; i++){

            if(str[i] == s){
                flag = 1;
            }
        }
            
            if(flag == 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        
    }
    return 0;
}