#include <bits/stdc++.h>
using namespace std;

void dotheprob(){

    int number;
    cin>>number;
    int a=1;
    int b=number*number;
    int arr[number][number];
    for(int ai=0; ai<number; ai++){
        if(ai%2==0){
            for (int jk=0; jk<number; jk++)
                { 
                    if(jk%2==0)arr[ai][jk] = a++; 
                    else arr[ai][jk] = b--;
                }
        }
        else{
            for (int jk=number-1; jk>=0; jk--)
                { 
                    if(jk%2==0) arr[ai][jk] = b--;
                    else arr[ai][jk] = a++; 
                }
            } 
        }
    for(int ai=0; ai<number; ai++)
        { 
            for(int jk=0; jk<number; jk++){
                cout<<arr[ai][jk]<<" ";
            }
            cout<<endl;
        }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        dotheprob();
    }
    return 0;
}