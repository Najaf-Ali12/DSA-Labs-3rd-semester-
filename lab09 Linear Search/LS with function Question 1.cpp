#include <iostream>
using namespace std;
int LSA(int number){
	int array[10]={20,25,30,10,5,15,90,19,26,35};
	for (int index=0; index<10; index++){
		if (array[index]==number){
			cout<<"The number is found ";
			return 1;
		}
	}
	cout<<"The number is not found";
}
int main(){
	int array[10];
	LSA(25);
	return 1;
	
}