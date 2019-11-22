#include <iostream>
#include <stdlib.h>

using namespace std ;

int main(){

    unsigned int n ;
    cin >> n ;
    long arr[n] ;
    arr[0] = 0 ;
    arr[1] = 1 ;
    for(unsigned int i = 2 ; i <= n ; i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 10 ;
    }
    cout << (arr[n] %10 );
    return 0 ;

}
