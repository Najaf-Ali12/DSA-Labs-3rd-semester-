#include <iostream>
using namespace std;
int main(){
	int matrix[2][3]={{3,9,4},{2,1,5}};
	int rows=sizeof(matrix)/sizeof(matrix[0]);
	int columns=sizeof(matrix[0])/sizeof(matrix[0][0]);
	int transpose_matrix[columns][rows];
	for (int i=0; i<rows; i++){
		for (int j=0; j<columns; j++){
			transpose_matrix[j][i]=matrix[i][j];  //this is the core logic to get transpose
		}
	}
	//following lines are just to view the transpose matrix
	int columns_of_transpose=sizeof(transpose_matrix[0])/sizeof(transpose_matrix[0][0]);
	int rows_of_transpose=sizeof(transpose_matrix)/sizeof(transpose_matrix[0]);
	for (int k=0; k<rows_of_transpose; k++){
		for (int l=0; l<columns_of_transpose; l++){
			cout<<transpose_matrix[k][l];
		}
	}
	return 0;
}