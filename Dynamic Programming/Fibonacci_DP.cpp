#include <iostream>
using namespace std ;

int main() {
    int N = 50 ;
    int fibo[N] ;
    fibo[0] = 0;    // Base case
    fibo[1] = 1;    // Base case
    for( int i = 2 ; i < N ; ++i ) {
        fibo[i] = fibo[i-1] + fibo[i-2] ;
        // ในการกำหนดค่า fibo[i] เราต้องใช้ fibo[1] และ fibo[2] (สองตัวก่อน) ดังนั้นเราจึงตั้ง Base case ไว้สองตัว
        // ในการรันแต่ละ i เรารับประกันว่า i-1 และ i-2 เคยถูกรันมาแล้ว
    }
    cout << fibo[9] ;
}