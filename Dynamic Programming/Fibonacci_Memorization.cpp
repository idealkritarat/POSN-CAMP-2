#include <iostream>
using namespace std ;

const int N = 30;
int memo[N];

int fib ( int n ) {
    if ( n < 2 ) return n ; // Base case : fib(0) = 0 , fib(1) = 1
    if ( memo[n] ) return memo[n] ; // ถ้า memo[n] ไม่ใช่ 0 (เคยหาค่า fibonacci ตัวที่ n และเก็บไว้ใน memo[n] แล้ว) ให้ return ค่านั้นไปเลย ไม่ต้องทำ Recursion ใหม่
    return memo[n] = fib( n - 1 ) + fib ( n - 2 ) ; // ทำ Recursion และเก็บค่าไว้ใน memo[n] พร้อม ๆ กัน
}

int main(){
    int n ;
    cin >> n ;
    cout << fib ( n ) ;
}