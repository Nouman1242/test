#include<iostream>
#include<cmath>
using namespace std;
main()
{
  int a=5;
  int b=6;
  int c=1;
  int n=2;
  float x;
  float x1;
  x= (-b+(sqrt(pow(b,n)-4*a*c)))/(2*a);
  cout<<"Value of x is="<<x<<endl;
  x1= (-b-(sqrt(pow(b,n)-4*a*c)))/(2*a);
  cout<<"Value of x is="<<x1<<endl;
}