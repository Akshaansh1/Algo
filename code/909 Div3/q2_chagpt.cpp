#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int calculateMaxAbsoluteDifference(int boxes, vector<int>& weights) {
    sort(weights.begin(), weights.end());
    int max_diff = 0;

    for (int k = 1; k <= boxes; ++k) {
        int num_trucks = ceil((double)boxes / k);
        vector<long long> total_weights(num_trucks, 0);

        for (int i = 0; i < boxes; ++i) {
            total_weights[i % num_trucks] += weights[i];
        }

        sort(total_weights.begin(), total_weights.end());
        int diff = total_weights[num_trucks - 1] - total_weights[0];
        max_diff = max(max_diff, diff);
    }

    return max_diff;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int boxes;
        cin >> boxes;
        vector<int> weights(boxes);

        for (int i = 0; i < boxes; ++i) {
            cin >> weights[i];
        }

        int result = calculateMaxAbsoluteDifference(boxes, weights);
        cout << result << endl;
    }

    return 0;
}
