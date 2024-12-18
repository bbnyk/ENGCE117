#include <stdio.h>
int main () {

    int i, n, b ;
    printf( "Enter number : " ) ;
    scanf( "%d", &i ) ;
    
    for( n = 2 ; n <= i ; n ++ ) {
        b = 2 ;
        for( ; b < n ; b ++ ) {
            if ( n % b == 0 ) {
                break ;
            }//end for
        }//end for
        if( n == b ){
            printf( "%d ", n ) ;
        }//end if
    }//end for
    return 0 ;
}//end main