#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int work_done,pressure_vf, 
const_pressure,pressure_vi,change_of_pressure;
    
    
    cin>>pressure_vf>>pressure_vi>>const_pressure;
    
    change_of_pressure = pressure_vf - pressure_vi;
    work_done = const_pressure * change_of_pressure;

    cout<<work_done;
    return 0;
}
