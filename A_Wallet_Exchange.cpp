#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int i=1;
        if(a==b)
        {
            cout<<"Bob";
        }
        while(a!=0 || b!=0)
        {
            if(i%2!=0)
            {
                if(b>a){
                swap(a,b);}
                a = a-1;
            }
            else{
                if(a>b){
                swap(a,b);}
                b = b-1;
            }
            i++;
        }
    }
}
