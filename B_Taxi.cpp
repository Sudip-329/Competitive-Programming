#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        x += a[i];
    }
    if(x%4==0)
    {
        cout<<(x/4);
    }
    else
    {
        cout<<((x/4)+1);
    }
}