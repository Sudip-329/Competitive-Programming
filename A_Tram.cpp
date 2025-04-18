#include<iostream>
using namespace std;
int main()
{
    int t,x=0,y=0,c=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        x=y-a;

        y=x+b;
        if(y>c)
        {
            c = y;
        }
    }
    cout<<c;
}