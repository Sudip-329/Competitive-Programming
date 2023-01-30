#include<iostream>
using namespace std;
int main()
{
   int n,i,x=0;
   cin >>n;
   char s[10];                   //input --x; then ++x so output will be 0;
   while (n--)
   {
       cin>>s;

       if (s[1]=='+')
       {
           x++;
       }
        else
       {
           x--;
       }
   }
   cout <<x;
}