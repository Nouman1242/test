#include<iostream>
#include<cmath>
using namespace std;
string isEvenish(int number);
int num;
main()
{
  cout<<"Enter five digit number=";
  cin>>num;
  int result1, result2, result3, result4, result5,ans1,ans2,ans3,ans4,ans5,sum;
  ans1=num/10;
  ans2/ans1/10;
  ans3/ans2/10;
  ans4/ans3/10;
  ans5/ans4/10;
  result1=num%10;
  result2=ans1%10;
  result3=ans2%10;
  result4=ans3%10;
  result5=ans4%10;
  sum= (result1 + result2 + result3 + result4 + result5)%(2);
  if(sum==0)
  {
  cout<<"The sum is 0dd";
  }
  if(sum!=0)
  {
  cout<<"The sum is even";
  }

}