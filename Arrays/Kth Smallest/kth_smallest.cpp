// File: kth_smallest.cpp
#include <iostream>
#include <vector>
#include <algorithm>  // For sort() function
using namespace std;

class Solution {
public:
    int kthSmallest(vector<int> &arr, int k) {
        // Step 1: Sort the array in ascending order
        sort(arr.begin(), arr.end());

        // Step 2: Return the element at (k-1) index
        return arr[k - 1];
    }
};

int main() {
    Solution obj;

    // Input array
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;

    // Function call
    int result = obj.kthSmallest(arr, k);

    // Output result
    cout << "The " << k << "rd smallest element is: " << result << endl;

    return 0;
}
