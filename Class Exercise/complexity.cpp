#include <stdio.h>

int main(){

    int count=0, n;
    cin >> n ;

    for(count=0;count <n ; count ++){
        cout << "The value of count is: ";
        if(count  == 10)
            break;
    }

    return 0;
}
