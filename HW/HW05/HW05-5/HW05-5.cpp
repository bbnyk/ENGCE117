#include <stdio.h>

int main() {
    int num ;

    printf( "Input : " ) ; 
    scanf( "%d", &num ) ;

    if ( num % 2 == 0 ) {
        printf( "%d is an even integer\n", num ) ;
    } else {
        printf( "%d is an odd integer\n", num ) ;
    }// end if else

    return 0 ;
}//end main
