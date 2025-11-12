// File: reverse_array_two_pointers.cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the array using two pointers
void reverseArray(vector<int> &arr) {
    int left = 0;                 // Start pointer
    int right = arr.size() - 1;   // End pointer

    // Keep swapping until pointers meet
    while (left < right) {
        // Swap elements at left and right index
        swap(arr[left], arr[right]);

        // Move both pointers toward center
        left++;
        right--;
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
