#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        string s = to_string(n);

        int unique_digits = unordered_set<char>(s.begin(), s.end()).size();

        ll count = 9 * (unique_digits - 1) + (n >= stoll(s.substr(0, 1)));

        cout << count << endl;
    }

    return 0;
}
