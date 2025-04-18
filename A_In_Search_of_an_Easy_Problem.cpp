#include<iostream>
using namespace std;
int main()
{
    int n,count = 0,y=0;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i =0; i<n; i++)
    {
        if(a[i]==1)
        {
            count++;
        }
    }
    if(count>=1)
    {
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}