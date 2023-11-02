#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << "2 1" << endl;
        } else {
            cout << n << " " << n - 2 << " ";
            for (int i = 1; i <= n - 3; i++) {
                cout << i << " ";
            }
            cout << n - 1 << endl;
        }
    }

    return 0;
}
