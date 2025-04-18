#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int count = 0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                count++;
            }
            else
            {
                if(count>2)  //confition is greater than 2 so no need to check more;
                {   
                    break;
                }
                else
                {
                    count = 0;
                }
            }
        }

        if(count<=2)
        {
            cout<<"Sad"<<endl;
        }
        else
        {
            cout<<"Happy"<<endl;
        }
    }
    return 0;
}