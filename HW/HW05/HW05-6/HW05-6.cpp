#include <stdio.h>

int main() {
    int num ;

    printf( "Input : " ) ; 
    scanf( "%d", &num ) ;

    if ( num >= 0 ) {
        printf( "Possitive" ) ;
    } else {
        printf( "Negative" ) ;
    }// end if else

    return 0 ;
}//end main
