#include <iostream>
using namespace std;

int main() {
	//this will print upper portion of the pattern
	for (int i=1; i<=9; i+=2){
		for (int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	//this will print lower portion of the patten
    for (int i=9; i>=1; i-=2){
    	for (int j=1; j<=i; j++){
    		cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
