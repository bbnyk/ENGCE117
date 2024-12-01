#include <stdio.h>
#include <string.h>

//===prototype===
void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) ;

//===main===
int main() { 
    char out[ 20 ][ 10 ], splitter, text[ 50 ] ;
    int num = 0 ;
    explode( text, splitter, out, &num ) ;

    for ( int i = 0 ; i < num ; i++ ) {
       printf( "str2[%d] = \"%s\"\n" , i , out[ i ] ) ; 
    }//end for

    if ( num == 0 ) {
        printf( "count = 0" ) ;
    } else {
        printf( "count = %d", num ) ; 
    }//enf if else
    
    return 0 ;
}//end function

//===function===
void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) {

    gets( str1 ) ;
    splitter = getchar() ;

    char str_splitter[ 2 ] = { splitter, '\0' } ;

    char *word = strtok( str1, str_splitter ) ;

    while ( word != NULL ) {
        strcpy( str2[ *count ] , word ) ;
        word = strtok( NULL , str_splitter ) ; 
        ( *count ) ++ ;
    }//end while
}