// File: min_max_divide_conquer.cpp
#include <iostream>
#include <vector>
#include <algorithm>  // For min() and max()
using namespace std;

// Recursive function to get min and max between indices low and high
vector<int> getMinMax(vector<int>& arr, int low, int high) {
    vector<int> result(2);

    // Case 1: Only one element
    if (low == high) {
        result[0] = arr[low]; // both min and max same
        result[1] = arr[low];
        return result;
    }

    // Case 2: Two elements → only one comparison
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result[0] = arr[low];   // smaller → min
            result[1] = arr[high];  // larger → max
        } else {
            result[0] = arr[high];
            result[1] = arr[low];
        }
        return result;
    }

    // Case 3: More than two elements
    int mid = (low + high) / 2;

    // Find min & max for left half
    vector<int> left = getMinMax(arr, low, mid);

    // Find min & max for right half
    vector<int> right = getMinMax(arr, mid + 1, high);

    // Combine results
    result[0] = min(left[0], right[0]);  // overall min
    result[1] = max(left[1], right[1]);  // overall max

    return result;
}

// Wrapper function
vector<int> findMinMax(vector<int>& arr) {
    return getMinMax(arr, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {3, 5, 4, 1, 9};
    vector<int> result = findMinMax(arr);

    cout << "Minimum: " << result[0] << ", Maximum: " << result[1] << endl;
    return 0;
}
