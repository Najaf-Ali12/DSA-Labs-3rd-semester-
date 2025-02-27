#include<iostream>
using namespace std;
int main(){
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int sum=0;
	int rows=sizeof(matrix)/sizeof(matrix[0]);
	int columns=sizeof(matrix[0])/sizeof(matrix[0][0]);
	if (rows==columns){
		for (int i=0; i<rows; i++){
			sum+=matrix[i][i];
		}
	cout<<"The sum of diagonal elements is "<<sum;
	}	
	else{
		cout<<"The matrix is not square so it doesnot have a main diagonal";
	}
	return 0;
}