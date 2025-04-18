#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void math()
{
int x,sum=0,y;
char array[8][8],ch;
for(x=0; x<8; x++)
{
    for (y = 0; y < 8; y++)
        {
            cin >> array[x][y];
        }
}

for(x=0; x<8; x++)
{
    y=0;
    if(array[x][y] != '.')
    {
for ( y = 0; y < 8; y++)
{
    sum=1;
    if(array[x][y] == 'B')
    {
        ch='B';
        break;
    }
    else if(array[x][y] == 'R') ch='R';
    else {
    break;
    }
}

if(y == 8 && array[x][7] == 'R')
    {
        break;
    }
}
}

if(sum==0)
    {
        cout<<"B"<<endl;
    }
else if(y==8)
    { 
        cout<<ch<<endl;
    }
else
    {
        cout<<ch<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        math();
    }
    return 0;
}