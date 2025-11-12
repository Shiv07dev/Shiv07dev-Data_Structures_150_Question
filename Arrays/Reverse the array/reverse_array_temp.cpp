// File: reverse_array_temp.cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the array using a temporary array
void reverseArray(vector<int> &arr) {
    int n = arr.size();  // Get size of the array
    
    // Step 1: Create a temporary array of same size
    vector<int> temp(n);

    // Step 2: Copy elements in reverse order
    // Example: arr = [1,4,3,2,6,5] → temp = [5,6,2,3,4,1]
    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - i - 1];
    }

    // Step 3: Copy temp array back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    // Input array
    vector<int> arr = {1, 4, 3, 2, 6, 5};

    // Call the function
    reverseArray(arr);

    // Display the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
