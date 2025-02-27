#include <iostream>
using namespace std;
class Average{
	float sum;
	float average=0.0;
	public:
		void calculateAverage(float sum=0.0){
			average=sum/3;
		}
	public:
		float showAverage(){
			return average;
		}
	
};
int main(){
	Average obj;
	float sum=0.0;
	float num;
	for (int i=0; i<3; i++){
		cout<<"Enter num "<<i+1<<":";
		cin>>num;
		sum+=num;	
	}
	obj.calculateAverage(sum);
	cout<<obj.showAverage();
	return 0;
}

		
		
	

	
