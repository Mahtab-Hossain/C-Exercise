#include<iostream>
using namespace std;
int main(){

    int number;
    int remainder;


    cout <<"Enter the value of number: " ;
    cin >> number;


    if( (number % 5) ==0 || (number % 11)==0)
        cout << "The number is divisible either by 5 or by 11" ;

    return 0;
}
