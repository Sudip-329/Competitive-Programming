#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int i,x,count = 0,c=0;
    char s[100];
    cin>>s;
    x = strlen(s);

    for(i=0; i<x; i++)
    {
        if(isupper(s[i]))
        {
            count++;
        }
        else{
            c++;
        }
    }

    if(count>c)
    {
        char ch;
        for(i=0; i<x; i++)
        {
            ch = toupper(s[i]);
            cout<<ch;

        }
    }

    else{
        char ch;
        for(i=0; i<x; i++)
        {
        ch = tolower(s[i]);
        cout<<ch;
        }
    }
    return 0;

}