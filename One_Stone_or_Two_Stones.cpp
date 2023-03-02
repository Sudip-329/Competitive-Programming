#include<iostream>
using namespace std;
#define lng long long

void answer()
{
    lng p,q;
    cin>>p>>q;
    if(p==q)
    {
        if(p%2==1)
        {
            cout<<"CHEF";
            cout<<endl;
            return;
        }
        else if(p%2==0){
            cout<<"CHEFINA";
            cout<<endl;
            return;
        }
    }
    lng d = abs(p-q);
    lng minimum_value = min(p,q);

    if(d==1)
    {
        if(minimum_value %2== 1)
        {
            cout<<"CHEF";
            cout<<endl;
            return;
        }
        else{
            cout<<"CHEFINA";
            cout<<endl;
            return;
        }
    }
    else{
        if(p<q)
        {
            cout<<"CHEFINA";
            cout<<endl;
            return;
        }
        else{
            cout<<"CHEF";
            cout<<endl;
            return;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        answer();
    }
}