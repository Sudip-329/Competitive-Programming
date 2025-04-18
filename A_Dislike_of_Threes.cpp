#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,count = 0;
        cin>>a;
        for(int i=1; i<=10000; i++)
        {
            if(i%3==0 || i%10 ==3)
            {
                continue;

            }
            else{
                count++;
                if(count == a)
                {
                    cout<<i<<endl;
                }
            }

        }
    }
}