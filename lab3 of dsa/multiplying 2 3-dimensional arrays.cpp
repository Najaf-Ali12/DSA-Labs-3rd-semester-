#include <iostream>
using namespace std;
int main(){
	int sum=0;
	int matrix1[2][2][2]={{{1,2},{4,6}},{{2,4},{7,9}}};
	int matrix2[2][2][2]={{{5,2},{6,8}},{{2,4},{1,2}}};
	int rows_of_matrix2=sizeof(matrix2)/sizeof(matrix2[0]);
	int columns_of_matrix1=sizeof(matrix1[0])/sizeof(matrix1[0][0]);
	if (rows_of_matrix2==columns_of_matrix1){
		cout<<"Matrix multiplication is possible";
		for (int i=0; i<rows_of_matrix2; i++){
			for (int j=0; j<columns_of_matrix1; j++){
				for (int k=0; k<j; k++){
					sum+=matrix1[i][j][k]*matrix2[i][j][k];
				
				}
				cout<<"\n"<<sum;
				
			}
			
		}
	}
	else{
		cout<<"Matrix multiplication of given two matrices is not possible due to their order";
	}
	return 0;
}