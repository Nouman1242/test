#include<iostream>
#include<cmath>
using namespace std;
bool isSymmetrical(int number);
int number;
main()
{
  cout<<"Enter three digit number= ";
  cin>>number;
  int result1;
  int result2;
  int result3;
  int answer1;
  int answer2;
  int answer3;
  answer1= number/10;
  answer2= answer1/10;
  answer3= answer2/10;
  result1=number%10;
  result2=answer1%10;
  result3=answer2%10;
  if(result1==result3)
  {
  cout<<"Number is symmetrical"<<endl;
  }
  if(result1!=result3)
  {
  cout<<"Number is not symmetrical"<<endl;
  }
}