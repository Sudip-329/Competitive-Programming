#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int B[a];
    int sum = 0,sum2 = 0,count = 0;
    for(int i = 0; i < a; i++)
    {
        cin >> B[i];
        sum += B[i];
    }
    sum = sum / 2;  // if values are 2 1 2 then sum = 5/2 = 2 
    sort(B,B + a);
    for(int j = a - 1; j >= 0; j--)
    {
        sum2 += B[j];
        count++;
        if(sum < sum2)   //still 2<2 is false so loop will execute 1 more time 
        break;     // sorted 1 2 2 so 2+2 = 4   , 2 < 4 true so break  .
    }
    cout << count;
}
