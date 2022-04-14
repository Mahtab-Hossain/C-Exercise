#include <iostream>

using namespace std;

int main(){
    int numb1,numb2;
    cout<<"Input your digits: ";
    cin>>numb1>>numb2;
    cout<<"Range from  "<<numb1<<" to "<<numb2<<endl;
    
    while(numb1 < numb2){
        ++numb1;
        cout<<numb1<<endl;
    }
    return 0;
}