// File: reverse_array_inbuilt.cpp
#include <iostream>
#include <vector>
#include <algorithm>  // For reverse()
using namespace std;

// Function to reverse using inbuilt method
void reverseArray(vector<int> &arr) {
    reverse(arr.begin(), arr.end()); // STL function
}

int main() {
    vector<int> arr = {1, 4, 3, 2, 6, 5};

    reverseArray(arr);

    cout << "Reversed Array: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
