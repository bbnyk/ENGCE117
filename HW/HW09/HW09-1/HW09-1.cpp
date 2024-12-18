#include <stdio.h>

int main () {

    int a[ 100 ], n = 0 ;

    while( a[ n - 1 ] != -1 ) {

        printf( "Input [ %d ] : ", n ) ;
        scanf( "%d", &a[ n ] ) ;
        n ++ ;
    }

    printf( "Index = " ) ; 
    for( int i = 0 ; i < n - 1 ; i ++ ) {
        printf( "%d ", i ) ;
    }

    printf( "\nArray = " ) ; 
    for( int i = 0 ; i < n - 1 ; i ++ ) {
        printf( "%d ", a[ i ] ) ;
    }


    return 0 ;
}