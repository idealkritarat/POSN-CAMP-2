#include <iostream>
using namespace std;

void qsort ( int*a , int l , int r ) {
    if ( l >= r ) return ;
    int j = l ;
    for ( int i = l ; i < r ; ++i ) {
        if ( a[i] < a[r] ) {
            swap ( a[i] , a[j] ) ;
            ++j;
        }
    }
    swap ( a[j] , a[r] ) ;
    qsort ( a , l , j-1 ) ;
    qsort ( a , j+1 , r ) ;
    return ;
}

void Quick_sort ( int* a , int n ) {
    qsort ( a , 0 , n-1 ) ;
}

int main() {
    int a[] = { 5 , 8 , 1 , 10 , 9 , 7 , 12 , 2 , 3 , 4 } ;
    int n = sizeof( a ) / sizeof( a[0] ) ;
    cout << "Before Quick sort : " ;
    for ( int i : a ) cout << i << " " ;
    cout << "\n";
    
    Quick_sort ( a , n ) ; 
    
    cout << "After Quick sort : " ;
    for ( int i : a ) cout << i << " " ;
    cout << "\n";
}