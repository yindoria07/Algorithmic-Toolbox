#include <iostream>

using namespace std ;

int max(int a, int b){
    int m = a < b ? b : a ;
    return m ;
}

int LCS(int arr[], int n, int brr[], int m){
    int att[n+1][m+1] ;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            att[i][j] = 0 ;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(arr[i-1] == brr[j-1]){
                att[i][j] = max(att[i-1][j-1]+1,max(att[i-1][j],att[i][j-1])) ; 
            }
            else{
                att[i][j] = max(att[i-1][j],att[i][j-1]) ;
            }
        }
    }
    return att[n][m] ;
}

int main(){
    int n, m ;
    cin >> n ;
    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    cin >> m ;
    int brr[m] ;
    for(int i=0; i<m; i++){
        cin >> brr[i] ;
    }
    int result = LCS(arr, n, brr, m) ;
    cout << result ;
    return 0 ;
}