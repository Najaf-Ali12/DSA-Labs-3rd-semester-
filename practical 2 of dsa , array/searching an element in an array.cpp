#include <iostream>
using namespace std;
int array[10]={1,2,3,4,5,6,7,8,9,10};
	int search(int element){
		int i;
		for (i=0; i<sizeof(array); i++){
			if (array[i]==element){
				cout<<"The element is found successfully";
				break;
			}
		}
		if (i<sizeof(array)){
			return 0;
		}
		else{
			cout<<"The element doesnot exist in the array";
		}
		return 0;
	}
int main(){
	int num;
	cout<<"Please enter the number that you want to find: ";
	cin>>num;
	search(num);
	return 0;
}