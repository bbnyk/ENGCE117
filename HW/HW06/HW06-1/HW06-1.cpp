#include <stdio.h>

int main () {

    int n ;
    scanf( "%d", &n ) ;

    if( n % 2 == 0 ) {
        for( int i = 1 ; i <= n ; i ++ ) {
            printf( "(%d) Hello World\n", i ) ;
        }//end for
    } else {
        for( int i = 1 ; i <= n ; i ++ ) {
            printf( "[%d] Hello World\n", i ) ;
        }//end for
    }//end if else
    return 0 ;
}//end main