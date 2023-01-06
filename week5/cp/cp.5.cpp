#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int hours;
int minutes;
int ans1,ans2;
main()
{
    cin>>hours>>minutes;

    cout<<hours<<"h:";
    cout<<minutes<<"min"<<endl;
    ans2= minutes+15;
    if(ans2<=59)
    {
    cout<<hours<<":"<<ans2<<endl;
    }
    if(ans2>=59){
        ans1= hours+1;
        int ans3=0+15;
        cout<<ans1<<":"<<ans3;
    
    }
   if(ans1>=23)
   {
    hours=0;
    cout<<hours<<":"<<ans2<<endl;
   }
    }