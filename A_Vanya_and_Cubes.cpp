#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a =0,ans =0,count=0;
    while(n>=ans)
    {
        a++;
        ans = ans + a;
        n = n-ans;
        count++;
        if(n<0)
        {
            count--;
        }
    }
    cout<<count;
}