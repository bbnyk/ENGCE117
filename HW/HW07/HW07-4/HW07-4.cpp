#include <stdio.h>
int main () {

    int i, n, b ;
    printf( "Enter number : " ) ;
    scanf( "%d", &i ) ;
    
    n = 2 ;
    while( n <= i ) {
        b = 2 ;
        while( b < n ) {
            if ( n % b == 0 ) {
                break ;
            }//end while
            b++ ;
        }//end while
        if( n == b ){
            printf( "%d ", n ) ;
        }//end if
        n++ ;
    }//end while
    return 0 ;
}//end main
