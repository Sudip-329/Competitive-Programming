#include<iostream>
using namespace std;
int main()
{
    int n,h,i,count = 0;
    cin>>n>>h;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i]<h || a[i]==h)
        {
            count +=1;
        }
        else{
            count +=2;
        }
    }
    cout<<count;
}