#include <stdio.h>

int main () {

    int n ;
    scanf( "%d", &n ) ;

    if( n % 2 == 0 ) {
        int i = 1 ;
        while( i <= n ) {
            printf( "(%d) Hello World\n", i ) ;
            i++ ;
        }//end while
    } else {
        int i = 1 ;
        while( i <= n ) {
            printf( "[%d] Hello World\n", i ) ;
            i++ ;
        }//end while
    }//end if else
    return 0 ;
}//end main
