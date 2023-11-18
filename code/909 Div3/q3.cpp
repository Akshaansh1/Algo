#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxAlternateSumSubarray(vector<int>& arr) {
    int n = arr.size();
    int maxSum = 0, currSum = 0;

    for (int i = 0; i < n; ++i) {
        if ((i > 0) && (arr[i] % 2 == arr[i - 1] % 2)) {
            maxSum = max(maxSum, currSum);
            currSum = 0;
        }

        currSum += arr[i];
        currSum = max(currSum, arr[i]);
    }

    maxSum = max(maxSum, currSum);
    return maxSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int result = maxAlternateSumSubarray(arr);
        cout << result << endl;
    }

    return 0;
}
