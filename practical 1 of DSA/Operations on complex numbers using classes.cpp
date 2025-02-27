#include <iostream>
using namespace std;
class Complex{
	public:
		void addition(int real_part1=0,int imaginary_part1=0,int real_part2=0,int imaginary_part2=0){
			int sum_of_real_parts=real_part1+real_part2;
			int sum_of_imaginary_parts=imaginary_part1+imaginary_part2;
			if (sum_of_imaginary_parts<0) {
				cout<<"Addition of two given complex numbers is "<<sum_of_real_parts<<sum_of_imaginary_parts<<"i";
			}
			else{
				cout<<"Addition of two given complex numbers is "<<sum_of_real_parts<<"+"<<sum_of_imaginary_parts<<"i";
			}
			
		}
		void difference(int real_part1=0,int imaginary_part1=0,int real_part2=0,int imaginary_part2=0){
			int difference_of_real_parts=real_part1-real_part2;
			int difference_of_imaginary_parts=imaginary_part1-imaginary_part2;
			if (difference_of_imaginary_parts<0) {
				cout<<"Difference of two given complex numbers is "<<difference_of_real_parts<<difference_of_imaginary_parts<<"i";
			}
			else{
				cout<<"Difference of two given complex numbers is "<<difference_of_real_parts<<"+"<<difference_of_imaginary_parts<<"i";
			}
			
		}
		void product(int real_part1=0,int imaginary_part1=0,int real_part2=0,int imaginary_part2=0){
			int real_part=real_part1*real_part2-(imaginary_part1*imaginary_part2);
			int imaginary_part=(real_part1*imaginary_part2)+(real_part2*imaginary_part1);
			if (imaginary_part<0) {
				cout<<"Product of two given complex numbers is "<<real_part<<imaginary_part<<"i";
			}
			else{
				cout<<"Product of two given complex numbers is "<<real_part<<"+"<<imaginary_part<<"i";
			}
		}
};
int main(){
	Complex object;
	int real_part1;
	int real_part2;
	int imaginary_part1;
	int imaginary_part2;
	char op;
	cout<<"Enter the real part of complex number num1:";
	cin>>real_part1;
	cout<<"Enter the imaginary part of complex number num1:";
	cin>>imaginary_part1;
	cout<<"Enter the real part of complex number num2:";
	cin>>real_part2;
	cout<<"Enter the imaginary part of complex number num2:";
	cin>>imaginary_part2;
	cout<<"Enter the operation you want to perform on entered complex numbers(+,*,-): ";
	cin>>op;
	if (op=='+'){
		object.addition(real_part1,imaginary_part1,real_part2,imaginary_part2);
	}
	else if (op=='-'){
		object.difference(real_part1,imaginary_part1,real_part2,imaginary_part2);
	}
	else if (op=='*'){
		object.product(real_part1,imaginary_part1,real_part2,imaginary_part2);
	}
	return 0;
}