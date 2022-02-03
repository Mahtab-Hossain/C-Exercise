#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    //the equation is pv=nRT
    float n_moles,pressure,volume;//variable declaration
    float const_r, temp,var1,var2;
    cout<<"Insert the value of pressure, vol, constant r and temp \n";
    cin>>pressure>>volume>>const_r>>temp;
    
    var1 = pressure * volume;
    var2 = const_r * temp;
    n_moles= var1 / var2 ;

    cout<<"This is the number of moles present: "<<n_moles;
    return 0;
}
