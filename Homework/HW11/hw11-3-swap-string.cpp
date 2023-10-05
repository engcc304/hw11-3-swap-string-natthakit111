/*
    ผู้ใช้พิมพ์ข้อความเข้ามาในระบบ และให้คุณทำการแสดงการกลับตัวอักษรทั้งหมดที่ผู้ใช้กรอกมา 
    เช่น ผู้ใช้กรอกมาว่า Hello World คุณจะต้องแสดงบนหน้าจอว่า dlroW olleH

    Test case:
        Hello world
    Output:
        dlrow olleH

    Test case:
        RMUTL
    Output:
        LTUMR

    Test case:
        Orio
    Output:
        oirO

*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[ 50 ] ; 
    printf( " " ) ;
    fgets( a, sizeof( a ), stdin ) ; 

    int l = strlen( a ) ; 
    printf( " " ) ;
    for ( int i = l - 1 ; i >= 0 ; i-- ) {
        if ( a[ i ] != '\n' ) { 
            printf( "%c", a[ i ] );
        }//end if
    }//end for

    return 0 ;
}//end function


