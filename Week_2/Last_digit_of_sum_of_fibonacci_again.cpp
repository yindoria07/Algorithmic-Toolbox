#include <iostream>

using namespace std ;

int main(){
    long long m  , n ;
    int x ,y , z ,w;
    cin >> m >> n ;
    m = m + 1 ;
    n = n + 2 ;
    int swap = 0 ;
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
    w = m%y ;
    if( z < w){
        swap = 1 ;
        z = z + w ;
        w = z - w ;
        z = z - w ;
    }
    int arr[z] ;
    arr[0] = 0 ;
    arr[1] = 1 ;
    for( int i = 2 ; i <= z ; i++){
        arr[i] = (arr[i-1] + arr[i-2])%10 ;
    }
    if( swap == 1){
        if( arr[w] - arr[z] < 0){
            cout << arr[w] - arr[z] + 10 ;
        }
        else{
            cout << arr[w] - arr[z] ;
        }
    }
    else {
        if( arr[z] - arr[w] < 0){
            cout << arr[z] - arr[w] + 10 ;
        }
        else{
            cout << arr[z] - arr[w] ;
        }
    }
    return 0 ;
}
