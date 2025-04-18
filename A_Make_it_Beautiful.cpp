#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dotheproblem(){
    int ab;
    cin>>ab;
    int sudip[ab];

    unordered_map<int, int> chakrabarty;

    for(int i=0;i<ab;i++){
        cin>>sudip[i];
        chakrabarty[sudip[i]]++;
    }
    if(chakrabarty.size()==1)
    {
        cout<<"NO\n";
        return;
    }
    if(ab==1)
    {
        cout<<"YES\n";
        return;
    }
    if(ab==2 and sudip[0] == sudip[1])
    {
        cout<<"NO\n";
        return;
    }
    sort(sudip, sudip+ab); // sorting the code from begin to end
    reverse(sudip, sudip+ab);  //reversing the array

    cout<<"YES\n";
    if(sudip[0] == sudip[1])
    {
        swap(sudip[1], sudip[ab-1]);
    }

    for(auto i: sudip){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        dotheproblem();
    }
    return 0;
}
