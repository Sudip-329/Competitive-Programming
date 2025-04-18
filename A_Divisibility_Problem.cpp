#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long int a,b;
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else
            cout<<b-(a%b)<<endl;   //like 100%13 = 9         now 13 - 9 = 4(ans)
    }
}
    /*int t,count=0;
    cin>>t;
    while(t--)
    {
        count =0;
        int a,b;
        cin>>a>>b;
        while(a!=0)
        {
            if(a%b==0)
            {
                break;
            }
            else
            {
                a = a+1;
                count++;
            }
        }
        cout<<count<<endl;
    }*/
