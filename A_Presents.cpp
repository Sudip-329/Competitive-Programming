#include <iostream>
using namespace std;
int n, b, mas[120];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {          //2 3 4 1 
        cin >> b;                      //2nd friend got gift from 1st(position of array)
        mas[b] = i;                   //3rd friend got from 2nd(2nd pos array)
    }                                 //1st friend got from 4th(as 1 in 4th posiiton)
    for (int i = 1; i <= n; i++) {    //as working with array location and they are human
        cout << mas[i] << " ";        //can not start it with 0 ;
    }      //here printing array location 
}