#include <stdio.h> 

int main () {

    int num, nine = 9, sum = 9, i = 1 ;

    printf( "Enter Number : " ) ; 
    scanf( "%d", &num ) ;

    printf( "Series : " ) ; 

    printf( "9 " ) ; 

    while( i < num ) {

        nine = ( nine * 10 ) + 9 ;
        printf( "+ %d ", nine ) ; 
        sum += nine ;
        i++ ;

    }//end while

    printf( "\nSum : %d ", sum ) ; 

    return 0 ;
}//end main
