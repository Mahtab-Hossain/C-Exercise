#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> intStack; //empty stack
    for (size_t ix =0;ix!=10;ix++)
    intStack.push(ix);
    while(!intStack.empty()){
        int value =intStack.top();
        intStack.pop();
    }
    
    return 0;
}
