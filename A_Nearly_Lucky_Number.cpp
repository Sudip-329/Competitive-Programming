#include<iostream>
using namespace std;
int main()
{
    long long int n,r,l=0,k=0;
    cin >> n;

    while(n!=0)
    {
        r = n%10;
        n = n/10;

    if(r==4 || r==7)
    {
        k++;
    }
    }
   

    if (k == 4 || k==7)
    {
        cout<<"YES";
    }
    else{
        cout <<"NO";
    }
}
   

