#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<0<<endl;
            //break;
        }
        if(x<y)
        {
            if((y-x)%2!=0)
            {
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else if(x>y){
            if((x-y)%2!=0)
            {
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }

        }
    }
}