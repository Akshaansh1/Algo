#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector <int> a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int gp = max_element(a.begin() , a.end()) - a.begin();
        int lp = min_element(a.begin() , a.end())  - a.begin();

        cout << min({
            max(gp, lp) + 1,
            (n - 1) - min(gp, lp) + 1,
            (n - 1) - gp + lp + 2,
            (n - 1) - lp + gp + 2
    })<<endl;

    }
}