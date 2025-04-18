#include<iostream>
using namespace std;
int main()
{
    int i,c=1;
    string s;
    cin>>s;
    for( i=0; i<s.length();i++)  //c is 1 because if there is 7 one and if check condition then c++ will 
    {                            //be 6 .so start from 1 then c++ will be 7;
        if(s[i]==s[i+1])
        {
            c++;
            if(c>=7)
            {
                cout<<"YES";    //condition should be there,if not then if there is no same element 
                                //in last it will go to else condition c will be 0 not 7;
                return 0;       //so condition should be inside
            } 
        }

        else{
            c=1;
        }
    }
        cout<<"NO";
        return 0;
    
}