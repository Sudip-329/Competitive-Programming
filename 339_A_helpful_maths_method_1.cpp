#include<iostream>
#include<string>
#include<algorithm>  //not necessary
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j;
    for(i=0; i<s.size(); i+=2) //as values are after 1 position (between two value one + is there so i+=2)
    {
        for(j=0; j<s.size()-1; j+=2)
        {
            if(s[j]>s[j+2])
            {
                swap(s[j],s[j+2]);// it is a inbuilt swap function available in c++;more on swap code
            }
        }
    }
    cout<<s<<endl;
}