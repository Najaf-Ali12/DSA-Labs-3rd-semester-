#include <iostream>
using namespace std;
int main(){
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int rows=sizeof(matrix)/sizeof(matrix[0]);
	int columns=sizeof(matrix[0])/sizeof(matrix[0][0]);
	if (columns==rows){
		cout<<"All the elements except main diagonal are given below";
		for (int row=0; row<rows; row++){
			for (int column=0; column<columns; column++){
				if (row==column){
					continue;
				}
				else{
					cout<<"\n"<<matrix[row][column];
				}
			}
		}
	}
	else{
		cout<<"The matrix is not square";
	}
	return 0;
}