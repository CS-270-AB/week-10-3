#include <iostream>
#include <vector>
using namespace std;

// Function to swap two elements
void swapElements(int &a, int &b) {
    // TO DO
}

void selectionSort(vector<int>& nums) {
    // TO DO
}

// Function to print the array
void printArray(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {5, 3, 8, 4, 2};

    cout << "Original array: ";
    printArray(nums);

    selectionSort(nums);

    cout << "Sorted array: ";
    printArray(nums);

    return 0;
}
