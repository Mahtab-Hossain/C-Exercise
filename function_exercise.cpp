#include <cmath>
#include <iostream>
using namespace std;
double max_out_of_four(double a,double b,double c,double d){
    if(a>b&&a>c&&a>d){
        cout<<a;
    }
    else if(b>a&&b>c&&b>d){
        cout<<b;
    }
    else if(c>a&&c>b&&c>d){
        cout<<c;
    }
    else{
        cout<<d;
    }
    return 0;
}
int main()
{
    double a, b, c, d,ans;
    cin>>a>>b>>c>>d;
    ans=max_out_of_four(a,b,c,d);
    return 0;
}
