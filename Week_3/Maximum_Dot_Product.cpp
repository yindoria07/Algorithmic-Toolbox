#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a ;
    a = b ;
    b = temp ;
}

int main(){
    int n;
    cin >> n ;
    int arr[n] ;
    int aee[n] ;
    int64_t result = 0 ;
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    for(int i=0; i<n; i++){
        cin >> aee[i] ;
    }
    for(int i=0; i<n; i++){
        int min_index = i ;
        for(int j=i+1; j<n; j++){
            if( arr[j] <= arr[min_index]){
                min_index = j ;
            }
        }
        swap(arr[i], arr[min_index]) ;
    }
    for(int i=0; i<n; i++){
        int min_index = i ;
        for(int j=i+1; j<n; j++){
            if( aee[j] <= aee[min_index]){
                min_index = j ;
            }
        }
        swap(aee[i], aee[min_index]) ;
    }
    for(int i=0; i<n; i++){
        result += (int64_t)arr[i]*aee[i] ;
    }
    cout << result << endl ;
    return 0;
}