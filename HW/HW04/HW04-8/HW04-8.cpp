#include <stdio.h>
#include <string.h>

int main () {

    char num[ 10 ] ;
    long long binary = 0 ;

    printf( "User Input : " ) ;
    scanf( "%s", num ) ;

    int digit = strlen( num ) ;

    for( int i = 0 ; i < digit ; i ++ ) {

        binary *= 10000 ;

        if( num[ i ] == '0' ) {
            binary += 0 ;
        }//end if
        if( num[ i ] == '1' ) {
            binary += 1 ;
        }//end if
        if( num[ i ] == '2' ) {
            binary += 10 ;
        }//end if
        if( num[ i ] == '3' ) {
            binary += 11 ;
        }//end if
        if( num[ i ] == '4' ) {
            binary += 100 ;
        }//end if
        if( num[ i ] == '5' ) {
            binary += 101 ;
        }//end if
        if( num[ i ] == '6' ) {
            binary += 110 ;
        }//end if
        if( num[ i ] == '7' ) {
            binary += 111 ;
        }//end if
        if( num[ i ] == '8' ) {
            binary += 1000 ;
        }//end if
        if( num[ i ] == '9' ) {
            binary += 1001 ;
        }//end if
        if( num[ i ] == 'A' ) {
            binary += 1010 ;
        }//end if
        if( num[ i ] == 'B' ) {
            binary += 1011 ;
        }//end if
        if( num[ i ] == 'C' ) {
            binary += 1100 ;
        }//end if
        if( num[ i ] == 'D' ) {
            binary += 1101 ;
        }//end if
        if( num[ i ] == 'E' ) {
            binary += 1110 ;
        }//end if
        if( num[ i ] == 'F' ) {
            binary += 1111 ;
        }//end if

    }//end for

    printf( "binary : %lld", binary ) ;

    return 0 ;
}//end main
