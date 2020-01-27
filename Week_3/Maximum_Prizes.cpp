#include <iostream>

using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int a = n ;
    int k = 1 ;
    while(n >= k){
        n = n-k ;
        k = k+1 ;
    }
     k-- ;
    cout << k << endl ;
    for(int i=1; i<k; i++){
        cout << i << " " ;
    }
    cout << a - k*(k-1)/2 << endl ; 
    return 0 ;
}