#include <stdio.h>
#include <string.h>

//===prototype===
char *reverse( char str1[] ) ;

//===main===
int main() {
    char text[ 50 ] ;
    char *out ;
    out = reverse( text ) ;
    printf( "%s", out ) ;
}//end function

//===function===
char *reverse( char str1[] ) {

    char *str2 ;
    int len ;
    gets( str1 ) ;
    len = strlen( str1 ) ;
    str2 = new char[ len ] ;

    for( int i = 0 ; i < len ; i++ ) {
        str2[ i ] = str1[ len - 1 - i ] ;
    }//end for

    str2[ len ] = '\0' ;
     
    return str2 ;
}//end function reverse
