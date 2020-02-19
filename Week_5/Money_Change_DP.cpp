#include <bits/stdc++.h>

using namespace std ;

int MinCoins(int n, int coins[], int m){
    int arr[n+1] ;
    arr[0] = 0 ;
    for(int i=1; i<n+1; i++){
        arr[i] = INT_MAX ;
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<m; j++){
            if(coins[j] <= i){
                int sub_res = arr[i-coins[j]] ;
                if( sub_res != INT_MAX && sub_res+ 1 < arr[i]){
                    arr[i] = sub_res + 1 ;
                }
            }
        }
    }
    return arr[n] ;
}

int main(){
    int coins[] = {1,3,4} ;
    int n ;
    cin >> n ;
    int result = MinCoins(n, coins, 3) ; 
    cout << result << endl ;
    return 0 ;
}