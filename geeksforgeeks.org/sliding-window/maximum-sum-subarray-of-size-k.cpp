#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &arr, int k) {
    int n = arr.size();
    
    // n should be greater than or equal to window size
    if (n < k) {
        cout << "invalid";
        return -1;
    }
    
    // current window -> max sum compute = current window (size K) all elements sum
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    
    // minimum possible value--so that any other value will be greater
    // (We initialize max_sum with the first window's sum)
    int max_sum = window_sum; 
    
    // move window --> subtract first el. from prev window and add last el. of current window.
    // (Start from i = k to avoid out-of-bounds access)
    for (int i = k; i < n; i++) {
        window_sum = window_sum + arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum); // update the maximum sum value
    }
    
    return max_sum;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Coding Blocks expects JUST the final number, no extra text
    cout << maxSum(arr, k) << endl;
    
    return 0;
}