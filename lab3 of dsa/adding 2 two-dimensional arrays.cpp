//write a c++ program to add two 2-dimensional arrays(two metrices)
#include<iostream>
using namespace std;
int main(){
	int matrix1[2][3]={{1,2,3},{4,5,6}};
	int matrix2[2][3]={{7,4,5},{4,8,7}};
	if (sizeof(matrix1)==sizeof(matrix2)){
		int rows=sizeof(matrix1)/sizeof(matrix1[0]);
		int columns=sizeof(matrix1[0])/sizeof(matrix1[0][0]);
		int result_matrix[rows][columns];
		for (int i=0; i<rows; i++){
			for (int j=0; j<columns; j++){
				result_matrix[i][j]=matrix1[i][j]+matrix2[i][j];
			}
		}
		for (int i=0; i<rows; i++){
			for (int j=0; j<columns; j++){
				cout<<"\n"<<result_matrix[i][j];
			}
		}
		
	}
	else{
		cout<<"For addition of two metrices ,they must have same order";
	}
}