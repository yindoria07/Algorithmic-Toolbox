#include <iostream>

using namespace std ;

void swap(int &a, int &b){
    int temp = a ;
    a = b ;
    b = temp ;
}

int Partition(int arr[], int start, int end, int &high){
    int i = start+1 ;
    high = start+1 ;
    int piv = arr[start] ;
    for(int j=start+1; j<=end; j++){
        if(arr[j] < piv){
            swap(arr[j], arr[high]) ;
            swap(arr[i], arr[high]) ;
            i++ ;
            high++ ;
        }
        else if(arr[j] == piv){
            swap(arr[j], arr[high]) ;
            high++ ;
        }
    }
    swap(arr[start], arr[i-1]) ;
    return i-1 ;
}

void Quick_Sort(int arr[], int start, int end){
    if(start <= end){
        int high = 0 ;
        int low = Partition(arr, start, end, high) ;
        
        Quick_Sort(arr, start, low-1) ;
        Quick_Sort(arr, high, end) ;
        
    }
}
int main(){
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    Quick_Sort(arr, 0, n-1) ;
    for(int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }
    return 0 ;
}