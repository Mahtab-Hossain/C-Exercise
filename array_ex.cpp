#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n1,n2,i;
    cin>>n1;
    int arr[n1];
    
    for(i=0;i<n1;i++){
        cin>>arr[i];
    };
    for(i=0;i<n1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
