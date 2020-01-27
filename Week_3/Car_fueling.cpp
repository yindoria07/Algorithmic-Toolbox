#include <iostream>

using namespace std;

int main(){
    int d, m, n ;
    cin >> d >> m >> n ;
    n = n+1 ;
    int arr[n] ;
    int result = 0 ;
    d = d-m ;
    arr[0] = 0 ;
    for(int i=1; i<n; i++){
        cin >> arr[i] ;
    }
    int x = 0 ;
    while(d > 0 && x < n-1){
        int a = x ;
        if(arr[a+1] - arr[a] > m){
            cout << -1 << endl ;
            return 0 ;
        }
        while(arr[x+1] - arr[a] <= m && x < n-1){
            if(arr[x+1] - arr[x] > m){
                cout << -1 << endl ;
                return 0 ;
            }
            x++ ;
        }
        d = d - (arr[x] - arr[a]) ;
        result++ ;
        a = x ;
    }
    if(d > 0){
        cout << -1 << endl ;
    }
    else{
        cout << result << endl ;    
    }
    return 0 ;
}