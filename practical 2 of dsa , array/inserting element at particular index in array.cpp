//we have to insert a particular value at specific index
#include<iostream>
#include<vector>
using namespace std;
int array[]={1,2,3,4,5,6,7,8,9,10,34,10};
int insert(int index,int value){
	int size=sizeof(array)/sizeof(array[0]);    //this line tell the size of array
	if (index>=size){                             //this line checks that index should be less than size
		cout<<"Given index is greater than size of list";
	}
	else if (index<1){    //this checks whether given index is a positive number or not
		cout<<"Please insert the positive number for index";
	}
	else{    
		vector<int> dynamic_list(array,array+size);  //this lines convert array into dynamic array(list)
		int element=dynamic_list[index];      //element,element2 are the temporary variables to shift 
		int element2=dynamic_list[index+1];   //the move each number on next index after inserting value
		for (int i=0; i<dynamic_list.size(); i++){
			if (i==index){
				dynamic_list[i]=value;
			}
			else if (i>index){
				if ((i-index)%2==1){      //here it is checked whether we have to insert element or element2
					dynamic_list[i]=element;
					if (i+1!=dynamic_list.size()){   //it checks whether the index is not the last 
						element=dynamic_list[i+2];
					}
				}
				else if ((i-index)%2==0){
					dynamic_list[i]=element2;
					if (i+1!=dynamic_list.size()){
						element2=dynamic_list[i+2];
					}
				}
			}
		}
		for (int j=0; j<size; j++){
			cout<<dynamic_list[j]<<"\n";
		}
	}
	return 0;
}
int main(){
	int index;
	int value;
	cout<<"Enter the index at which you want to insert value: ";
	cin>>index;
	cout<<"Enter the value that you want to insert at index"<<index<<":";
	cin>>value;  
	insert(index,value);    //calls method insert
	return 0;
}