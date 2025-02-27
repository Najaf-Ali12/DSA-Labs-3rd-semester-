#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

//Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
//if they are in the wrong order. 
//This algorithm is not suitable for large data sets as its average and worst-case time complexity are quite high.
//We sort the array using multiple passes. After the first pass, the maximum element goes to end
//(its correct position). Same way, after second pass, the second largest element goes to second last position
//and so on.In every pass, we process only those elements that have already not moved to correct position. 
//After k passes, the largest k elements must have been moved to the last k positions.
//In a pass, we consider remaining elements and compare all adjacent and swap if larger element is 
//before a smaller element. 
//If we keep doing this, we get the largest (among the remaining elements) at its correct position.