#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i,sum = 0,p,x=0;
    cin >> k >> n >> w;
    for(i=1; i<=w; i++)
    {

        x= k*i;
        sum = sum +x;
    }
    if(sum>n)
    {
         p = sum -n;
    }
    cout <<p;
}