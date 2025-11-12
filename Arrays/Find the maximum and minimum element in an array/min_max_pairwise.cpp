// File: min_max_pairwise.cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to find min and max using pairwise comparison
vector<int> findMinMax(const vector<int>& arr) {
    int n = arr.size();
    int mini, maxi;
    int i;  // loop variable

    // Step 1: Initialize based on even or odd size
    if (n % 2 == 1) {
        // Odd number of elements → first element is both min and max
        mini = maxi = arr[0];
        i = 1;  // Start from second element
    } else {
        // Even → compare first two
        if (arr[0] < arr[1]) {
            mini = arr[0];
            maxi = arr[1];
        } else {
            mini = arr[1];
            maxi = arr[0];
        }
        i = 2;  // Start from third element
    }

    // Step 2: Process remaining elements in pairs
    while (i < n - 1) {
        // Compare elements in a pair
        if (arr[i] < arr[i + 1]) {
            // First smaller, second larger
            if (arr[i] < mini)
                mini = arr[i];
            if (arr[i + 1] > maxi)
                maxi = arr[i + 1];
        } else {
            // First larger, second smaller
            if (arr[i + 1] < mini)
                mini = arr[i + 1];
            if (arr[i] > maxi)
                maxi = arr[i];
        }
        i += 2;  // Move to next pair
    }

    return {mini, maxi};
}

int main() {
    vector<int> arr = {3, 5, 4, 1, 9};
    vector<int> result = findMinMax(arr);

    cout << "Minimum: " << result[0] << ", Maximum: " << result[1] << endl;
    return 0;
}
