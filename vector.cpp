#include <iostream>
#include <vector>
using namespace std;
using std::vector;
int main()
{
    cout<<"insert numbers: ";
    int num;
    cin>>num;
    vector<int> v{num};
    for(auto &i : v)
    i *= i;
    for(auto i : v)
    cout<<i<< " ";
    cout<<endl;
    return 0;
}
