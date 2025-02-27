//#include <stdio.h>
//#include <conio.h>
//float addition(float num1,float num2){
//	return num1+num2;
//}
//float subtraction(float num1,float num2){
//	return num1-num2;
//}
//float multiplication(float num1,float num2){
//	return num1*num2;
//}
//float division(float num1,float num2){
//	if (num2==0.0){
//		printf("can not be divided by zero");
//	}
//	else{
//		return num1/num2;
//	}
//}
//void main(){
//	float num1;
//	float num2;
//scanf("%f",&num1);
//printf("Enter the operator you want to perform (*,+,-,/):");
//scanf("%c")
//char opt=getch();
//printf("Enter num2: ");
//scanf("%f",&num2);
//if (opt=='+){
//	printf("\nThe additiion of numbers is %f",addition(num1,num2));
//}
//else if (opt=='-'){
//	printf("\nThe subtraction of numbers is %f",subtraction(num1,num2));
//}
//else if (opt=='*'){
//	printf("\nThe multiplication of numbers is %f",multiplication(num1,num2));
//}
//else if (opt=='/'){
//	printf("\nThe division of numbers is %f",division(num1,num2));
//}
//else{
//	printf("Invalid operator selected");
//}
// getch();
//	
//}
//
#include <stdio.h>
#include <conio.h>
int main(){
	int array[]={1,2,3,5,6,3,2,9};
	array[80]=80;
	printf("%d",sizeof(array)/sizeof(array[0]));
	printf("\n%d",array[80]);
	return 90;
}
