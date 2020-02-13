#include <iostream>

using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    int m ;
    int count = 0 ;
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    for(int i=0; i<n; i++){
        if(count == 0){
            m = arr[i] ;
            count++ ;
        }
        else if(arr[i] == m){
            count++ ;
        }
        else if(arr[i] != m){
            count-- ;
        }
    }
    count = 0 ;
    for(int i=0; i<n; i++){
        if(arr[i] == m){
            count++ ;
        }
    }
    if(count > n/2){
        cout << 1 << endl ;
    }
    else cout << 0 << endl ;
    return 0 ;
}