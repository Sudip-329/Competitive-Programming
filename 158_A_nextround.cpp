#include<iostream>
using namespace std;
int main()
{
    int n, k, i, a[100], count = 0;
    cin >> n >> k;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] > 0 && a[i] >= a[k-1])  //it wil check the k-1 th positon value and compare it with 
            count++;                      // every ith pos value
    }
    cout << count << endl;
}
//suppose n=3  k=2  values are 7 5 3 
// now a[0]= 7 which is greater than a[1]= 5. here a[0]= 7,a[1]=5   so count ++;
// a[1]=5  which i sequal to a[1]=5 so count ++
//end