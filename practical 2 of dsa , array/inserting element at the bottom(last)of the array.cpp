#include<iostream>
#include <vector>
using namespace std;
int main(){
	int element_to_insert;
	int array[]={1,2,3,4,5,6,7,8,10};
	int size=sizeof(array)/sizeof(array[0]);
	vector<int> dynamic_array(array,array+size);
	cout<<"Enter the number that you want to add at the last of the list: ";
	cin>>element_to_insert;
	dynamic_array[size]=element_to_insert;
	for (int i=0; i<=dynamic_array.size(); i++){
		cout<<dynamic_array[i]<<"\n";
	}
	return 0;
}