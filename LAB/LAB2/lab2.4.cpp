#include <stdio.h>
#include <string.h>

//===prototype===
void explode( char str1[], char splitters[], char str2[][ 50 ], int *count ) ;

//===main===
int main() { 
    char out[ 50 ][ 50 ], s[ 10 ], text[ 50 ] ;
    int num = 0 ;
    explode( text, s, out, &num ) ;

    for ( int i = 0 ; i < num ; i++ ) {
       printf( "str2[%d] = \"%s\"\n" , i , out[i] ) ;
    }//end for

    if ( num == 0 ) {
        printf( "count = 0" ) ;
    } else {
        printf( "count = %d", num ) ; 
    }//enf if else
    
    return 0 ;
}//end function

//===function===
void explode( char str1[], char splitters[], char str2[][ 50 ], int *count ) {

    gets( str1 ) ;
    int i = 0, m ;
    while( 1 ){
        splitters[ i ] = getchar() ; 
        if( splitters[ i ] == '\n' ) {
            splitters[ i ] = '\0' ;
            break ;
        }//end if
        i++ ;
    }//end while

    char *word = strtok( str1, splitters ) ;

    while ( word != NULL ) {
        strcpy( str2[*count] , word ) ;
        word = strtok( NULL , splitters ) ; 
        ( *count ) ++ ;
    }//end while

    int len ;
    for( int j = 0 ; j < *count ; j ++ ) {

        len = strlen( str2[ j ] ) ;
        for( int n = 0 ; n < len ; n ++ ) {
            m = 1 ;
            while( str2[ j ][ n ] == ' ' ) {                  
                   str2[ j ][ n ] = str2[ j ][ n + m ] ;
                   str2[ j ][ n + m ] = ' ' ;
                   m ++ ;
            }//end while
        }//end for
    }//end for
    for( int j = 0 ; j < *count ; j ++ ) {
        m = 1 ;
        while( str2[ j ][ 0 ] == '\0' ) {
            strcpy( str2[ j ], str2[ j + m ] ) ;
            str2[ j + m ][ 0 ] = '\0' ;
            m ++ ;
            ( *count ) -- ;
        }//end while
    }//end for
}//end function explode