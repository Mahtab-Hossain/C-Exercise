#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    float mass,power,temp_i,temp_f,c=4190;
    int formula,t ;
    cin>>mass>>power>>temp_i>>temp_f;
    float del_temp = temp_f - temp_i;
    float q= c * mass * del_temp;
    formula = q/power;
    cout<<formula;
    return 0;
}
