#include <stdio.h>

int main () {

    int start, end ;
    printf( "start : " ) ;
    scanf( "%d", &start ) ;
    printf( "end : " ) ;
    scanf( "%d", &end ) ;

    while( start <= end ) {
        printf( "\n" ) ;
        int i = 1 ;
        while( i <= 9 ) {
            printf( "%d x %d = %d\n", start, i, start * i ) ;
            i++ ;
        }//end while
        start++ ;
    }//end while

    return 0 ;
}//end main
