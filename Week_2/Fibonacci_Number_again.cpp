#include <iostream>

using namespace std ;

int main(){
    long long n ;
    int m ;
    int x ,y , z ;
    cin >> n >> m ;
    int a = 0 ;
    int b = 1 ;
    int period = 1 ;
    while(true){
        period++ ;
        x = (a + b)%m ;
        y = (x + b)%m ;
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
    for( int i = 2 ; i <= z ; i++){
        arr[i] = (arr[i-1] + arr[i-2])%m ;
    }
    cout << arr[z] << endl ;
    return 0 ;
}
