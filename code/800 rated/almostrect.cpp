#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        char mat[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }

        int f1 = 0;
        int f2 = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == '*')
                {
                    f1 = i;
                    f2 = j;
                }
            }
        }

        cout<<f1<<" "<<f2<<endl;
    }
}