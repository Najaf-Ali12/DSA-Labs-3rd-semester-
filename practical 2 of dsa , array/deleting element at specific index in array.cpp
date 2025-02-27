//// to delete an item at particular index
#include<iostream>
#include <vector>
using namespace std;
int main(){
	int index=5;
	int array[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(array)/sizeof(array[0]);
	vector<int> list(array,array+size);
	for (int i=0; i<list.size(); i++){
		if (i>=index){
			list[i]=list[i+1];
		}
	}
	for (int j=0; j<list.size(); j++){
		cout<<list[j]<<"\n";
	}
	return 0;
}

//// to delete an item at particular index
//#include<iostream>
//#include <vector>
//using namespace std;
//int main(){
//	int index=5;
//	int array[]={1,2,3,4,5,6,7,8,9,10};
//	int size=sizeof(array)/sizeof(array[0]);
//	for (int i=0; i<size; i++){
//		if (i>=index){
//			array[i]=array[i+1];
//		}
//	}
//	for (int j=0; j<size; j++){
//		cout<<array[j]<<"\n";
//	}
//	return 0;
//}