#include <stdio.h>

int main() {

    int score ;

    printf( "enter score : " ) ;

    scanf( "%d", &score ) ;

    for( ; score >= 80 ; score = NULL ) {
        printf( "A !" ) ;
    }//end for
    for( ; score >= 75 && score < 80 ; score = NULL ) {
        printf( "B+ !" ) ;
    }//end for
    for( ; score >= 70 && score < 75 ; score = NULL ) {
        printf( "B !" ) ;
    }//end for
    for( ; score >= 65 && score < 70 ; score = NULL ) {
        printf( "C+ !" ) ;
    }//end for
    for( ; score >= 60 && score < 65 ; score = NULL ) {
        printf( "C !" ) ;
    }//end for
    for( ; score >= 55 && score < 60 ; score = NULL ) {
        printf( "D+ !" ) ;
    }//end for
    for( ; score >= 50 && score < 55 ; score = NULL ) {
        printf( "D !" ) ;
    }//end for
    for( ; score < 50 && score != NULL ; score = NULL ) {
        printf( "F !" ) ;
    }//end for

    return 0 ;

}//end main