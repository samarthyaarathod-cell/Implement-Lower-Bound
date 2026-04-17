#include <bits/stdc++.h>
using namespace std;

// Function to find lower bound
int lowerBound(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;  // Default: if no element >= target

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            ans = mid;       // possible answer
            high = mid - 1;  // move left to find smaller index
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
    int target = 9;

    int result = lowerBound(arr, target);
    cout << "Lower Bound Index: " << result << endl;

    return 0;
}