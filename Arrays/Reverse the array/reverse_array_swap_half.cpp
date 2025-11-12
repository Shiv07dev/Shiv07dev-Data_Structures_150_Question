// File: reverse_array_swap_half.cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to reverse array by swapping elements
void reverseArray(vector<int> &arr) {
    int n = arr.size();

    // Only need to loop through half
    for (int i = 0; i < n / 2; i++) {
        // Swap first and last element
        swap(arr[i], arr[n - i - 1]);
    }
}

int main() {
    vector<int> arr = {1, 4, 3, 2, 6, 5};

    reverseArray(arr);

    cout << "Reversed Array: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
