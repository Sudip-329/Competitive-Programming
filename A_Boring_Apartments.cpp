#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,num =0,count =0,ans =0;
        cin>>a;
        while(a!=0)
        {
            
            num = a%10;
            a = a/10;
            count++;

        }
       // cout<<count;
       // cout<<num-1;
        if(count==4)
        {
        // ans = ans+1;
            cout<<(num*10);
        }
        else if(count ==3)
        {
            cout<<(num-1)*10+6;
        }
        else if(count==2)
        {
            cout<<(num-1)*10+3;
        }
        else if(count ==1)
        {
            cout<<(num-1)*10+1;
        }
        cout<<endl;
    }

}