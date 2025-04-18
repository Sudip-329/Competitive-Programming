#include<iostream>
using namespace std;
int main()
{
    int n,a,c,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a+b == c)
        {
            cout<<"YES\n";
        }
        else if(a+c == b)
        {
            cout<<"YES\n";
        }
        else if (b+c == a)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}