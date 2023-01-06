#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
int fun(int num1, int num2);
int num1,num2;
main()
{
    system("cls");
fun(num1,num2);
}
int fun(int num1, int num2)
    {
        cout<<"Enter first number=";
        cin>>num1;
        cout<<"Enter second number=";
        cin>>num2;
        int sum= num1+num2;
        cout<<"Sum is="<<sum;
        return sum;
    }