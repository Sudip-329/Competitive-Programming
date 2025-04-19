#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void ans()
{
    long long p;
    cin >> p;
    string a;
    cin >> a;
    long long x=0, y=p-1;

    string r=a;
    reverse(r.begin(),r.end());

    if(a == r)
    {
        cout<<"YES"<<endl;
        return;
    }

    while (x<=y)
    {
        if (a[x] == a[y])
        {
            x++,y--;
        }else{break;}
    }

    while (x<=y)
    {
        if (a[x] != a[y])
        {
            a[x] = a[y];
            x++, y--;
        }else{break;}
    }

    r = a;
    reverse(r.begin(),r.end());
    if (a==r)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


int main()
{
    long long testcase;
    cin >> testcase;
    while (testcase--)
    {
        ans();
    }
    return 0;
}