#include<iostream>

#include<windows.h>

#include<conio.h>

#include<cmath>

using namespace std;

int sum(int num1,int num2);
float division(int num1, int num2);
  int num1; 
  int num2;
main()  
  {
  system("cls");
  while(true)
    {
  int result;
  float divide;
  cout<<"Enter first number=";
  cin>> num1;
  cout<<"Enter second number=";
  cin>> num2;
  result= sum(num1,num2);
  cout<<"Sum is="<<result<<endl;
  divide = division(num1,num2);
  cout<<"Divided answer is="<<divide<<endl;
  cout<<"Press any key to continue..."<<endl;
  getch();
    }
  }
int sum(int ,int)
    
    {
    int sum= num1+num2;
    return sum;
    
    }
float division(int num1, int num2)
    {
    float div=num1/num2;
    return div;
    }    