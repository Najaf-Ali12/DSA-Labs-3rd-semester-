#include <iostream>
#include <vector>  //this will make our array dynamic
#include <algorithm>

using namespace std;

string rbinarySearchAlgorithm(int number, const vector<int>& anylist) {   //this is our recursive function
    // Stop case
    if (anylist.size() <= 2) {   //will search when only two elemenst are left to search
        for (int elem : anylist) {
            if (elem == number) {
                cout << "The element found" << endl;
                return "found";
            }
        }
        return "not found";
    }
    
    int middle_index = anylist.size() / 2;
    int middle_element = anylist[middle_index];
    
    if (number == middle_element) {
        cout << "The number is found" << endl;
        return "found";
    } 
	else if (number < middle_element) {   //the begin() will give first element and end() will give last element
        vector<int> left_half(anylist.begin(), anylist.begin() + middle_index);  // left_half vectors contains elements from first to the 
        return rbinarySearchAlgorithm(number, left_half);
    } 
	else {
        vector<int> right_half(anylist.begin() + middle_index, anylist.end());
        return rbinarySearchAlgorithm(number, right_half);
    }
}

void binarySearchAlgorithm(vector<int>& binary_tree, int number) {
    sort(binary_tree.begin(), binary_tree.end());
    string result = rbinarySearchAlgorithm(number, binary_tree);
    if (result == "not found") {
        cout << "The number does not exist in the list." << endl;
    }
}

int main() {
    vector<int> list_to_input;
    int length_of_list;
    
    cout << "Enter the length of list from which you want to search element: ";
    cin >> length_of_list;
    
    for (int i = 0; i < length_of_list; ++i) {
        int element;
        cout << "Enter the number to insert at index " << i << ": ";
        cin >> element;
        list_to_input.push_back(element);
    }
    
    int number_to_search;
    cout << "Enter the number that you want to search: ";
    cin >> number_to_search;
    
    binarySearchAlgorithm(list_to_input, number_to_search);
    
    return 0;
}
