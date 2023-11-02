#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        for (int i = 2, j = 2; i <= n; i++, j++) {
            if (n % i == n % j) {
                cout << i << " " << j << endl;

            }
        }
    }
    return 0;
}
