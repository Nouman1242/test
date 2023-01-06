#include<iostream>
#include<cmath>
using namespace std;
float calculateHeight(float distance , float degree);
  float base;
  float degree;
  float radian;
  float height;  
main()
{
  cout<<"Enter the value of base=";
  cin>>base;
  cout<<"Enter the value of angle in degree=";
  cin>>degree;
  float result;
  result=calculateHeight(distance,degree);  
  cout<<"Height is="<<result;
}
float calculateHeight(float distance,float degree)
  {
  radian=degree/57.2958;
  height=base*tan(radian);
  return height;

  }
  