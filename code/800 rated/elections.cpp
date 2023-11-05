#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int max_votes = max(a, max(b, c));

        int votes_to_add_a = max_votes - a + 1;
        int votes_to_add_b = max_votes - b + 1;
        int votes_to_add_c = max_votes - c + 1;

        cout << votes_to_add_a << " " << votes_to_add_b << " " << votes_to_add_c << endl;
    }

    return 0;
}
