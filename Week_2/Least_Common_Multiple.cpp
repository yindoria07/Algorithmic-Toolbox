#include <iostream>
#include <math.h>

using namespace std ;
int main(){

    unsigned long a ,b ;
    unsigned long x = 0;
    cin >> a >> b ;
    unsigned long h = a ;
    unsigned long j = b ;
        if(a < b){
            x = b  ;
            b = a ;
            a = x ;
        }
    while( b != 0){
        x = a%b ;
        a = b ;
        b = x ;
    }
    h = h/a;
    h = h*j ;
        cout << h ;
    return 0 ;
}

