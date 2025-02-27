#include <iostream>
using namespace std;
int array[10]={1,2,3,4,5,6,7,89,78,56};
int update(int index,int element){
	if (index>=sizeof(array)){
		cout<<"The index out of bound exception";
	}
	else if (array[index]==NULL){
		cout<<"The index out of bound exception";
	}
	else{
	array[index]=element;
	cout<<"Array updated successfully";
	return 0;
		
	}
}
int main(){
	int index;
	int element;
	cout<<"Enter the index at which you want to update the array:";
	cin>>index;
	cout<<"Enter the new element with which you want to update the array:";
	cin>>element;
	update(index,element);
	return 90;	
}