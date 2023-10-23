#include <iostream>
#include <string.h>
using namespace std ;

int main() {
    int N = 100 ;
    bool sieve[N] ;
    memset( sieve , false , sizeof ( sieve ) ) ;
    for( int i = 2 ; i * i < N ; ++i ) {
        if ( ! sieve[i] ) { // เช็คว่า i ถูกตัดออกหรือยัง (ถ้าถูกตัดออกแล้วแสดงว่ามีจำนวนเต็ม k ก่อนหน้าหาร i ลงตัว ดังนั้น j ในลูปข้างก็จะถูกตัดออกด้วย k หมดแล้ว ดังนั้นข้าม i ตัวนั้นไปเลย)
            for( int j = i + i ; j < N ; j += i ) {
                sieve[j] = true ; // ตัดตัวที่มากกว่า i และหารด้วย i ลงตัว ก็คือ 2i, 3i, 4i, ...
            }
        }
    }
    for( int i = 2 ; i < 100 ; ++i ) {
        if ( ! sieve[i] ) cout << i << "\n"; // แสดงตัวที่ยังไม่ถูกตัดออก (จำนวนเฉพาะ)
    }
}