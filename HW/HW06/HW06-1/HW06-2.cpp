#include <stdio.h>

int main () {

    int num ;

    scanf( "%d", &num ) ;

    printf( "%d = ", num ) ;

    for( ; num >= 1000 ; num -= 1000 ) {
        printf( "M" ) ;
    }//end for

    for( ; num >= 900 ; num -= 900 ) {
        printf( "CM" ) ;
    }//end for

    for( ; num >= 500 ; num -= 500 ) {
        printf( "D" ) ;
    }//end for

    for( ; num >= 400 ; num -= 400 ) {
        printf( "CD" ) ;
    }//end for

    for( ; num >= 100 ; num -= 100 ) {
        printf( "C" ) ;
    }//end for

    for( ; num >= 90 ; num -= 90 ) {
        printf( "XC" ) ;
    }//end for

    for( ; num >= 50 ; num -= 50 ) {
        printf( "L" ) ;
    }//end for

    for( ; num >= 40 ; num -= 40 ) {
        printf( "XL" ) ;
    }//end for

    for( ; num >= 10 ; num -= 10 ) {
        printf( "X" ) ;
    }//end for

    for( ; num >= 9 ; num -= 9 ) {
        printf( "IX" ) ;
    }//end for

    for( ; num >= 5 ; num -= 5 ) {
        printf( "V" ) ;
    }//end for

    for( ; num >= 4 ; num -= 4 ) {
        printf( "IV" ) ;
    }//end for

    for( ; num > 0 ; num -= 1 ) {
        printf( "I" ) ;
    }//end for

    return 0 ;

}//end main