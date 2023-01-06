#include<iostream>
#include<windows.h>
using namespace std;
bool is_symmetrical();
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
    cout<<r1<<"";
    r2=ans2%10;
    cout<<r2<<"";
    r3=ans3%10;
    r4=ans4%10;
    r5=ans5%10;
    cout<<r5<<"";
}