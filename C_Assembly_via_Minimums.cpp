#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> in;
        int a = (n * (n - 1)) / 2;
        cout<<a;
        int b;
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            in.push_back(b);
        }
        cout<<in[0]<<"here";
        vector<int> ans;
        if (a == 1)
        {
            cout << in[1], in[1];
        }/*
        else
        {
            for(int i = 0;i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        ans.push_back(max(in[i], in[j]));
                    }
                }
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;*/
    }
}
