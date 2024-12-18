#include <stdio.h>

int main () {

    int num, a = 0, b = 1, c = 0, sum = 1 ;

    scanf( "%d", &num ) ;

    printf( "Series = 1 " ) ;
    for( int i = 0 ; i < num - 1 ; i ++ ) {

        c = a + b ;

        printf( "+ %d ", c ) ;

        a = b ;
        b = c ;
        sum += c ;

    }//end for

    printf( "\nSum = %d", sum ) ;

    return 0 ;
}//end main