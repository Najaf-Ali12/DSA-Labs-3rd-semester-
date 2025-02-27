//we have to delete the first element of an array
#include <iostream>
#include<vector>
using namespace std;
int main(){
	int array[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(array)/sizeof(array[0]);
	vector<int> list(array,array+size);
	for (int i=0; i<size; i++){
		list[i]=list[i+1];
	}
	for (int j=0; j<list.size()-1; j++){
		cout<<list[j]<<"\n";
	}
	return 0;
}