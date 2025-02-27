#include<iostream>
#include <vector>
using namespace std;
int main(){
	int element_to_insert;
	int array[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(array)/sizeof(array[0]);
	vector<int> mylist(array,array+size);
	cout<<"Enter the number that you want to add at the bottom of the list: ";
	cin>>element_to_insert;
	int element=mylist[0];
	int element2=mylist[1];
	for (int i=0; i<=size-1; i++){
		if (i==0){
			mylist[0]=element_to_insert;
		}
		else if (i%2==1){
			mylist[i]=element;
			if (i+1>=size-1){
				
			}
			else{
			element=mylist[i+2];
			}
		}
		else{
			mylist[i]=element2;
			if (i+1>=size-1){
				
			}
			else{
			element2=mylist[i+2];
			}
		}	
	}
	for (int j=0; j<size; j++){
		cout<<mylist[j]<<"\n";
	}
	return 0;
}