#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int N, M, count = 0;
        cin >> N >> M;
        string s, t;
        cin >> s >> t;

        if (s[N - 1] != t[M - 1])
        {
            for (int a = 0; a < N - 1; a++)
            {
                if (s[a] == s[a + 1])
                {
                    count++;
                    if (count == 2)
                    {
                        break;
                    }
                }
            }
            if (count != 2)
            {
                for (int a = 0; a < M - 1; a++)
                {
                    if (t[a] == t[a + 1])
                    {
                        count++;
                        if (count == 2)
                        {
                            break;
                        }
                    }
                }
            }
            if (count != 2)
            {
                cout << "YES";
            }
            else{
                cout << "NO";
            }
        }
        else    //(s[N - 1] == t[M - 1])
        {
            for (int a=0; a<N-1; a++)
            {
                if (s[a] == s[a + 1])
                {
                    count = 5;
                    break;
                }
            }
            if (count != 5)
            {
                for (int a=0; a<M-1; a++)
                {
                    if (t[a]==t[a+1])
                    {
                        count = 5;
                        break;
                    }
                }
            }
            if (count!=5){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        cout<<endl;
    }
}
    
