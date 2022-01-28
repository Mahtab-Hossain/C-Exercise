#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n1,n2,i;
    cin>>n1>>n2;
    string array_1[9] = 
{"one","two","three","four","five","six","seven","eight","nine"};
    for(i=n1;i<=n2;i++){
        if(i<=9){
            cout<<array_1[i-1]<<endl;
        }
        else if(i%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
        
    }
    return 0;
}
