#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        string sudip;
        cin>>sudip;
        string p = "314159265358979323846264338327";
        for(int i=0; i<sudip.size(); i++)
        {
            if(sudip[i]==p[i])
            {
                count++;
            }
            else{
                break;}
        }
        cout<<count<<endl;

    }
}
