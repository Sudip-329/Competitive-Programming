#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 
    long long n, m, num, tc, t = 1;
    cin >> tc;
    while (tc--) {
        long long arr[3];  //for sorting purpose
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        sort(arr, arr + 3);
        long long dif = arr[2] - arr[0];
        dif += arr[2] - arr[1];
 
        if(n >= dif) {
            n -= dif;
            if(n % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}