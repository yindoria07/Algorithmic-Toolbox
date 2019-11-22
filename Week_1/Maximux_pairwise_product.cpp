#include <iostream>

using namespace std ;

int main() {

	int n ;
	cin >> n ;
	long arr[n] ;
	long large1 = 0 ;
	long large2 = 0 ;
	int x =0 ;

	for(int i =0 ; i< n;i++){
        cin >> arr[i] ;
	}
	for(int i =0 ;i<n ; i++){
        if (large1 < arr[i]){
            large1 = arr[i] ;
           x = i ;
        }
	}
	arr[x] = 0 ;
	for(int j =0 ;j < n ; j++){
        if(large2 < arr[j])
            large2 = arr[j] ;
	}
	cout << ( large1*large2) ;
	return 0 ;
}
