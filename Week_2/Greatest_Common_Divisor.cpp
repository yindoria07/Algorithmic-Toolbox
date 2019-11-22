#include <iostream>
#include <math.h>

using namespace std ;

int main(){
    // take the two integers whose
    //gcd to be found
    long a ,b ;
    int x = 0;
    cin >> a >> b ;
        if(a < b){
            x = b  ;
            b = a ;
            a = x ;
        }
    // gcd(a,b) == gcd(b,a%b)
    while( b != 0){
        x = a%b ;
        a = b ;
        b = x ;
    }
    //gcd(a,0) = a
        cout << a ;
    return 0 ;
}
