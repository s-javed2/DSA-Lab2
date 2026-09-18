#include <iostream>
using namespace std;

// This function displays the pointers memory address and the value it points to
void analyze_pointer(int *ptr) {

	// Only output when the pointer is not null.
	if (ptr != nullptr) {
		cout << "Memory Address: " << ptr << endl;
		cout << "Value Stored:   " << *ptr << endl;
	}
	else {
		cout << "Pointer is null." << endl;
	}
}

int main() {
	// Stack Memory Allocation
	cout << "Stack Allocation: " << endl;
	int iValue = 42;
	analyze_pointer(&iValue); // Pass address using reference operator

	// Heap Memory Allocation
	cout << "\nHeap Allocation" << endl;
	int *heapPtr = new int;   // Allocate memory on heap
	*heapPtr = 99;            // Assign value
	analyze_pointer(heapPtr); // Pass pointer directly

	// Clean up heap memory
	delete heapPtr;
	heapPtr = nullptr;

	return 0;
}