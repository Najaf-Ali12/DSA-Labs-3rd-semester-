#include <stdio.h>
#include <conio.h>
void main(){
	int num1;
	int num2;
	char operator='-';
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	printf("Enter the operator between num1 and num2: ");
	operator=getch();
	switch(operator){
		case '+':
			printf("\nthe sum of %d and %d is %d",num1,num2,num1+num2);
			break;
	}
		case '-':
			printf("\nthe Subtraction of %d and %d is %d",num1,num2,num1-num2);
			break;
		case '*':
			printf("\nthe multiplication of %d and %d is %d",num1,num2,num1*num2);
			break;
		case '/':
			printf("\nthe division of %d and %d is %d",num1,num2,num1/num2);
			break;
		default:
			printf("\nYou inserted invalid operator");
	getch();
}