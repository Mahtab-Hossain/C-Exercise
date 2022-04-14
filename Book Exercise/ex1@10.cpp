#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter your number: ";
    cin>>num;
    while(num != 0){
        num =num - 1;
        cout<<num<<endl;
    }
    return 0;
}