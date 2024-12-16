#include <stdio.h>

int main () {

    int day ;

    printf( "Input Days : " ) ;
    scanf( "%d", &day ) ;
    printf( "%d days = %d seconds", day, day * 86400 ) ;

    return 0 ;
}//end main