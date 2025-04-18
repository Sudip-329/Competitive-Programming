#include<iostream>
using namespace std;
int main()
{
    int k,n,r=0;
    cin >>n>>k;
    for(int i=0; i<k; i++)
    {
        r= n%10;

        if(r==0)
        {
            n= n/10;
        }
        else{
            n= n-1;
        }
    }
    cout<<n;

}