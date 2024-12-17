#include <stdio.h>

int main () {

    char a, b, c, d, x ;

    scanf( "%c %c %c %c", &a, &b, &c, &d ) ;

    x = a ;
    a = d ;
    d = x ;
    x = b ;
    b = c ;
    c = x ;

    printf( "Result : %c %c %c %c", a, b, c, d ) ;

    return 0 ;
}//end main