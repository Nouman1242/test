#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int num;
main()
{
    cout<<"Enter five digit number=";
    cin>>num;
    int ans1,ans2,ans3,ans4,ans5;
    float r1,r2,r3,r4,r5;
    ans1=num/10;
    ans2=ans1/10;
    ans3=ans2/10;
    ans4=ans3/10;
    ans5=ans4/10;
    r1=num%10;
    r2=ans1%10;
    r3=ans2%10;
    r4=ans3%10;
    r5=ans4%10;
    int c1;
    c1=r1+r2+r3+r4+r5;
    if(c1%2==0)
    {
        cout<<"The number is evenish";
    }
    if(c1%2!=0)
    {
        cout<<"THe number is oddish ";
    }
}