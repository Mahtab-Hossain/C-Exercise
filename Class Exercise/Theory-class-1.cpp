#include<iostream>
using namespace std;

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}
int main ()
{
  int sum, sum_1;
  sum= addition(5,7);
  sum_1= addition(15,2);
  cout << "The sum =" << sum << " " <<sum_1;
  return 0;
}
