//write a c++ program to display the diagonal elements of a given matrix
#include <iostream>
using namespace std;
int main(){
	//here in matrix[3][2] first number denotes the number of rows and second denotes the number of columns
	int matrix[3][3]={{1,2,8},{3,4,9},{5,6,10}};
	int rows=sizeof(matrix)/sizeof(matrix[0]);
	int columns=sizeof(matrix[0])/sizeof(matrix[0][0]);
	cout<<rows<<"\n";	
	cout<<columns<<"\n";
	if (rows==columns){
		cout<<"The diagonal elements of given matrix are ";
		for (int i=0; i<rows; i++){
			cout<<"\n"<<matrix[i][i];
		}
	}
	else{
		cout<<"The matrix is not square so its diagonal doesnot exists";
	}
	return 0;
}