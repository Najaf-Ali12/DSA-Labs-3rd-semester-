#include <iostream>
#include <vector>
using namespace std;
void rmergesort(const vector<int>& anylist){
	int middle_index = anylist.size() / 2;
    int middle_element = anylist[middle_index];
	vector<int> sorted_list;
	if (sizeof(anylist)/sizeof(anylist[0])==1){
		sorted_list.push_back(anylist.begin());
	}
	if (anylist.size()%2==1) {   //list has odd number of elements
		
	}
	vector<int> left_half(anylist.begin(), anylist.begin() + middle_index);  // left_half vectors contains elements from first to the 
        return rmergesort(left_half);
    vector<int> right_half(anylist.begin() + middle_index, anylist.end());
        return rmergesort(right_half);
}
void  mergesort(vector<int> list){
	
	rmergesort(list);
}
int main(){
	vector<int> list_to_input;
    int length_of_list;
    
    cout << "Enter the length of list whom you want to sort: ";
    cin >> length_of_list;
    
    for (int i = 0; i < length_of_list; ++i) {
        int element;
        cout << "Enter the number to insert at index " << i << ": ";
        cin >> element;
        list_to_input.push_back(element);
    }
    mergesort(list_to_input);
	return 0;
}