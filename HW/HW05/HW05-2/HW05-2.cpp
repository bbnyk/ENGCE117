#include <stdio.h>

int main () {

    int a, b, c ;

    printf( "Input[1] : " ) ;
    scanf( "%d", &a ) ;
    printf( "Input[2] : " ) ;
    scanf( "%d", &b ) ;
    printf( "Input[3] : " ) ;
    scanf( "%d", &c ) ;

    if( a > b ) {
        if( a > c ) {  
            printf( "%d ", a ) ;
            if( b > c ) {
                printf( "%d ", b ) ;
                printf( "%d ", c ) ;
            } else {
                printf( "%d ", c ) ;
                printf( "%d ", b ) ;
            }//end if else
        } else {
            printf( "%d ", c ) ;
            printf( "%d ", a ) ;
            printf( "%d ", b ) ;
        }//end if else
    } else {
        if( b > c ){
            printf( "%d ", b ) ;
            if( c > a ) {
                printf( "%d ", c ) ;
                printf( "%d ", a ) ;
            } else {
                printf( "%d ", a ) ;
                printf( "%d ", c ) ;
            }//end if else
        } else {
            printf( "%d ", c ) ;
            printf( "%d ", b ) ;
            printf( "%d ", a ) ;
        }//end if else
    }//end if else

    return 0 ;
}//end main