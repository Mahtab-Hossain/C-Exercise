#include <iostream>
using namespace std;

int main(){
    int i,num,j,num2;
    cin>>num>>num2;
    int** sequence = new int* [num];
    for(i=0;i<num;i++){
        int n1;
        cin>>n1;
        
        int* b_sequence = new int[n1];
        for(j=0;j<n1;j++){
            int n2;
            cin>>n2;
            b_sequence[j]=n2;
        }
        *(sequence+i)=b_sequence;
    }
    for(i=0; i<num2;i++){
        int num_1,num_2;
        cin>>num_1>>num_2;
        cout<<sequence[num_1][num_2]<<endl;
    }
    return 0;
}
