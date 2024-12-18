#include <stdio.h>

int main () {

    int start, end ;
    printf( "start : " ) ;
    scanf( "%d", &start ) ;
    printf( "end : " ) ;
    scanf( "%d", &end ) ;

    for( ; start <= end ; start++ ) {
        printf( "\n" ) ;
        for( int i = 1 ; i <= 9 ; i ++) {
            printf( "%d x %d = %d\n", start, i, start * i ) ;
        }//end for
    }//end for

    return 0 ;
}//end main