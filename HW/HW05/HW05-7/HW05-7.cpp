#include <stdio.h>

int main() {
    int year ;

    printf( "Years : " ) ; 
    scanf( "%d", &year ) ;

    if ( year % 4 == 0 && year % 100 != 0 ) {
        printf( "February has 29 days" ) ;
    } else if( year % 400 == 0 && year % 100 == 0 ) {
        printf( "February has 29 days" ) ;
    } else {
        printf( "February has 28 days" ) ;
    }//end if else

    return 0 ;
}//end main
