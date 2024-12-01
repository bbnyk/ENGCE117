#include <stdio.h>

int main () {

    char fn[30], ln[30] ;

    printf( "First Name: " ) ;
    scanf( "%s", fn ) ;
    printf( "Last Name: " ) ;
    scanf( "%s", ln ) ;

    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand", fn, ln ) ;


    return 0 ;
}