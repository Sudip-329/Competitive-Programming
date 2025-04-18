#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0);
        for(long p = 0; p < 2 * n; p++){
            long x; scanf("%ld", &x);
            cnt += (x % 2);   //when number is odd 1 will be added to cnt 
        }

        puts(cnt == n ? "Yes" : "No");// here checking cnt == n or not ;
    }

}