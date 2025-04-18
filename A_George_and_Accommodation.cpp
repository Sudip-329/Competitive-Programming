#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(p+2<=q)
        {
            count++;
        }
    }
    cout<<count;
}