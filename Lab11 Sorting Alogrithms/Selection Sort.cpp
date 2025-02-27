#include <iostream>
# include <vector>
using namespace std;
int main(){
	
	int list[11]={11,20,25,30,16,8,23,12,2,3,9};
	int inner_loop_index,outer_loop_index,temp;
	for (outer_loop_index=0; outer_loop_index<11; outer_loop_index++){
		for (inner_loop_index=outer_loop_index+1; inner_loop_index<11; inner_loop_index++){
			if (list[outer_loop_index]>list[inner_loop_index]){
				temp=list[outer_loop_index];
				list[outer_loop_index]=list[inner_loop_index];
				list[inner_loop_index]=temp;
			}
		}
	}
	for (int i=0; i<11; i++){
		cout<<list[i]<<" ";
	}
	return 1;
}
//Selection Sort is a comparison-based sorting algorithm. 
//It sorts an array by repeatedly selecting the smallest (or largest) 
//element from the unsorted portion and swapping it with the first unsorted element. 