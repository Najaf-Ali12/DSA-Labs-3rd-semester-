#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

//Insertion sort is a simple sorting algorithm that works by iteratively inserting each element 
//of an unsorted list into its correct position in a sorted portion of the list. 
//It is like sorting playing cards in your hands. You split the cards into two groups: 
//the sorted cards and the unsorted cards. Then, you pick a card from the unsorted group and 
//put it in the right place in the sorted group.
//We start with second element of the array as first element in the array is assumed to be sorted.
//Compare second element with the first element and check if the second element is smaller then swap them.
//Move to the third element and compare it with the first two elements and put at its correct position
//Repeat until the entire array is sorted.

