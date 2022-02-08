#include<iostream>
using namespace std;

int main(){

    float number_1, number_2;
    float result;
    cout << "Enter these two values: ";
    cin >> number_1 >> number_2 ;

    char operation;
    cout << "Enter which operation you want to perform: ";
    cin >> operation;

    if(operation == '+'){
        result = number_1 + number_2;
        cout << "The final result is: " << result << endl;
    }
    else if(operation == '-'){
        result = number_1 - number_2;
        cout << "The final result is: " << result << endl;
    }
    else if(operation == '*'){
        result = number_1 * number_2;
        cout << "The final result is: " << result << endl;
    }
    else if( operation == '/'){
        result= number_1 / number_2;
        cout << "The final result is: " << result << endl;
    }

    else{
        cout << "Invalid operation, please input a valid operation";
    }



    return 0;
}
