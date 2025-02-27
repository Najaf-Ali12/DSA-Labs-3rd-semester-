#include<stdio.h>
#include<conio.h>
void main(){
	float temp_in_degree_celsius;
	printf("Enter the temperature in centigrade: ");
	scanf("%f",&temp_in_degree_celsius);
	float temp_in_fr=(temp_in_degree_celsius*9/5)+32;
	printf("The %f in celsius will be equal to %f in farhenheit",temp_in_degree_celsius,temp_in_fr);
}