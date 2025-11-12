// File: min_max_single_scan.cpp
#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX, INT_MIN
using namespace std;

// Function to find min and max in one traversal
vector<int> findMinMax(vector<int>& arr) {
    int n = arr.size();
    int mini = INT_MAX;  // Assume very large value initially
    int maxi = INT_MIN;  // Assume very small value initially

    // Traverse through all elements
    for (int i = 0; i < n; i++) {
        // If current element smaller than mini → update mini
        if (arr[i] < mini)
            mini = arr[i];

        // If current element greater than maxi → update maxi
        if (arr[i] > maxi)
            maxi = arr[i];
    }

    return {mini, maxi};
}

int main() {
    vector<int> arr = {3, 5, 4, 1, 9};
    vector<int> result = findMinMax(arr);

    cout << "Minimum: " << result[0] << ", Maximum: " << result[1] << endl;
    return 0;
}
