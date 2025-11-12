// File: min_max_sort.cpp
#include <iostream>
#include <vector>
#include <algorithm>  // For sort()
using namespace std;

// Function to find min and max using sorting
vector<int> findMinMax(vector<int>& arr) {
    // Step 1: Copy original array (optional, to avoid changing original)
    vector<int> sortedArr = arr;

    // Step 2: Sort the array in ascending order
    sort(sortedArr.begin(), sortedArr.end());

    // Step 3: First element = min, Last element = max
    return {sortedArr[0], sortedArr[sortedArr.size() - 1]};
}

int main() {
    vector<int> arr = {3, 5, 4, 1, 9};

    vector<int> result = findMinMax(arr);

    cout << "Minimum: " << result[0] << ", Maximum: " << result[1] << endl;
    return 0;
}
