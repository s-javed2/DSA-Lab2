#include <iostream>
#include <cassert> // Defining the assert() function using this header

using namespace std;

// Implemented the complete version of the function this time.
bool isSorted(const int* arr, const int size) {
    // An array with 1 or 0 elements is basically sorted.
    if (size <= 1) {
        return true;
    }

    // A loop is used to iterate through the array and compare the neighboring elements using a conditional.
    for (int i = 0; i < size - 1; i++) {
        // If the current element is strictly greater than the next, it is unsorted
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}

// 1. Already sorted array in ascending order
void testSortedArray() {
    int arr[] = { 1, 2, 3, 4, 5 };
    assert(isSorted(arr, 5) == true);
}

// 2. Unsorted array
void testUnsortedArray() {
    int arr[] = { 1, 4, 3, 5, 6 };
    assert(isSorted(arr, 5) == false);
}

// 3. Sorted array with duplicate values
void testDuplicateValues() {
    int arr[] = { 1, 2, 2, 3, 5 };
    assert(isSorted(arr, 5) == true);
}

// 4. One element array
void testSingleElement() {
    int arr[] = { 42 };
    assert(isSorted(arr, 1) == true);
}

// 5. Array that has been sorted in descending order
void testDescendingArray() {
    int arr[] = { 5, 4, 3, 2, 1 };
    assert(isSorted(arr, 5) == false);
}

// 6. Array with negative values in it
void testNegativeValues() {
    int arr[] = { -5, -2, 0, 1, 4 };
    assert(isSorted(arr, 5) == true);
}

// 7. Personal: All elements are identical
void testIdenticalElements() {
    int arr[] = { 7, 7, 7, 7 };
    assert(isSorted(arr, 4) == true);
}

// 8. Personal: Just two elements and is unsorted
void testTwoElementsUnsorted() {
    int arr[] = { 10, -10 };
    assert(isSorted(arr, 2) == false);
}

// 9. New Test case that AI identified
void testZeroElements() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
}



int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testIdenticalElements();
    testTwoElementsUnsorted();
    testZeroElements();

    cout << "All initial tests executed." << endl;
    
    return 0;
}