#include "sort.h";

void insertionSort(list<int>& myList) {
    list<int> sorted; // Initialize an empty sorted list

    for (const int& val : myList) {
        // Traverse the sorted list to find the correct position
        auto it = sorted.begin();
        while (it != sorted.end() && *it < val) {
            ++it;
        }
        // Insert the value at the correct position
        sorted.insert(it, val);
    }

    myList = sorted; // Update the original list
};
