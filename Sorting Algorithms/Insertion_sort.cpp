#include <iostream>
using namespace std ;

void Insertion_sort ( int* a , int n ) {
    for ( int i = 1 ; i < n ; ++i ) {
        // เราหยิบ a[i] ขึ้นมาแล้วกำลังจะหาว่า เราต้องเอาไป insert ไว้ตรงไหนก่อนหน้า
        for ( int j = i ; j > 0 ; --j ) {    // สลับตัวที่เรากำลังดูกับตัวทางซ้ายของมันไปเรื่อย ๆ จนกว่าจะเจอตัวที่น้อยกว่ามันตัวแรก
            if ( a[j] < a[j-1] ) {           // ถ้ามันน้อยกว่าตัวทางซ้ายมันให้สลับกัน
                swap ( a[j] , a[j-1] ) ;
            } else {
                break;                       // ถ้ามันมากกว่าตัวทางซ้าย หยุดลูปทันที
            }
        }
    }
    return ;
}

int main() {
    int a[] = { 5 , 8 , 1 , 10 , 9 , 7 , 12 , 2 , 3 , 4 } ;
    int n = sizeof( a ) / sizeof( a[0] ) ;
    
    cout << "Before Insertion sort : " ;
    for( int i : a ) cout << i << " " ;
    cout << "\n";
    
    Insertion_sort( a , n ) ; 
    
    cout << "After Insertion sort : " ;
    for( int i : a ) cout << i << " " ;
    cout << "\n";
}