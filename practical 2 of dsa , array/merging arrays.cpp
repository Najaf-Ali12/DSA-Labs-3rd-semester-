#include <iostream>
using namespace std;
int mergeArrays(int array1[10],int array2[10]){
	cout<<sizeof(array1);
	int mergedArray[sizeof(array1)+sizeof(array2)];
	for (int i=0; i<sizeof(array1); i++){
		mergedArray[i]=array1[i];
	}
	for (int j=10; j<sizeof(array2); j++){
		mergedArray[j]=array2[j-10];
	}
	for (int index=0; index<sizeof(mergedArray); index++){           //there is an issue in the size method
		//cout<<mergedArray[index]<<"\n";
	}
	return 0;
}
int main(){
	int array1[10]={1,2,3,4,5,6,7,8,9,10};
	int array2[10]={11,12,13,14,15,16,17,18,19,20};
	mergeArrays(array1,array2);
}