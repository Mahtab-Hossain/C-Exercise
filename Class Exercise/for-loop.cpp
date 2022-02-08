#include<iostream>
using namespace std;

int main(){

    int i=0;

    for(i=68; i<10 ; i++){
        cout <<"Hello World"<< endl;
    }

   /* 1) i=0
    2) condition check, i<5, true
    3) loop enter , cout == hello world
    4) i=0, i++ , i=1
    5) condition check , i<5 , 1<5, true
    6) loop enter , cout == hello world
    7) i=1, i++, i=2
    8) condition check , i<5, 2<5, true
    9) loop enter , cout == hello world
    10) i=2, i++, i=3
    11) condition check , i<5, 3<5, true
    12) loop enter , cout == hello world
    13) i=3, i++, i=4
    14) condition check , i<5, 4<5, true
    15) loop enter , cout == hello world
    16) i=4, i++, i=5
    17) condition check , i<5, 5<5, false
    18) will not enter in loop

    */
    return 0;
}
