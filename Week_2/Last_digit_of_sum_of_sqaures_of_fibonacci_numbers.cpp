#include <iostream>

using namespace std ;

int main(){
    long long n ;
    int x ,y , z ;
    cin >> n ;
    int a = 0 ;
    int b = 1 ;
    int period = 1 ;
    while(true){
        period++ ;
        x = (a + b)%10 ;
        y = (x + b)%10 ;
        if( x == 0 && y == 1){
            y = period ;
            break ;
        }
        a = b ;
        b = x ;
    }
    z = n%y ;
    int arr[z] ;
    arr[0] = 0 ;
    arr[1] = 1 ;
    for( int i = 2 ; i <= z+1 ; i++){
        arr[i] = (arr[i-1] + arr[i-2])%10 ;
    }
    cout << (arr[z]*arr[z+1])%10 << endl ;
    return 0 ;
}
