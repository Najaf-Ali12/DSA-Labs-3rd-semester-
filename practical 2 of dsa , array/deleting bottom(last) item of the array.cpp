//we have to delete bottom(last)element of the array;
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int array[]={11,2,3,4,5,6,7,8,9,10};
	int size=sizeof(array)/sizeof(array[0]);
	vector<int> list(array,array+size);
	int size_of_list=list.size();
	list[size_of_list-1]=0;
	cout<<list[size_of_list-1];
	for (int i=0; i<list.size(); i++){
		cout<<list[i]<<"\n";
	}
	return 0;
}
