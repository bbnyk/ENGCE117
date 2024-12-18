#include <stdio.h> 

int main () {

    int num, nine = 9, sum = 9 ;

    printf( "Enter Number : " ) ; 
    scanf( "%d", &num ) ;

    printf( "Series : " ) ; 

    printf( "9 " ) ; 

    for( int i = 1 ; i < num ; i ++ ) {

        nine = ( nine * 10 ) + 9 ;
        printf( "+ %d ", nine ) ; 
        sum += nine ;

    }//end for

    printf( "\nSum : %d ", sum ) ; 

    return 0 ;
}//end main