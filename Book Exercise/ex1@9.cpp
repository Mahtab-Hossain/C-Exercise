#include <iostream>

using namespace std;

int main(){
	int num1,num2;
	num1 = 50;
	num2 = 100;
	while( num1 <= 100){
		num1 += num2;
		num2++;
	}
	cout<<"Sum of num1 to num2 inclusive is: "<<num1<<endl;
	
	return 0;
}
