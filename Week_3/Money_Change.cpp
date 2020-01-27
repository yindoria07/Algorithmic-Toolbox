#include <iostream>

using namespace std ;

int main(){
    int m ;
    cin >> m ;
    int a, b, c ;
    a = m/10 ;
    b = (m%10)/5 ;
    c = (m%5)/1 ;
    a = a + b + c ;
    cout << a << endl ;
    return 0 ;
}