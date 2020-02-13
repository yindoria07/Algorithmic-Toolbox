#include <iostream>

using namespace std ;

int Binary_Search(int arr[], int min, int max, int key){
    if(max >= min){
        int mid = (max+min)/2 ;
        if(arr[mid] == key){
            return mid ;
        }
        else if(arr[mid] > key){
            return Binary_Search(arr, min, mid-1, key) ;
        }
        else{
            return Binary_Search(arr, mid+1, max, key) ;
        }
    }
    else{
        return -1 ;
    }
}
int main(){
    int n, k ;
    int result = -1 ;
    cin >> n ;
    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    cin >> k ;
    int keys[k] ;
    for(int i=0; i<k; i++){
        cin >> keys[i] ;
    }
    for(int i=0; i<k; i++){
        result = Binary_Search(arr, 0, n-1, keys[i]) ;
        cout << result << " " ;
    }
    return 0;
}