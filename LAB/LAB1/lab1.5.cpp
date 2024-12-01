#include <stdio.h>

//===prototype===
void GetMatrix( int value[], int *row, int *col, int *pN_Element ) ;

//===main====
int main() {
    int *data, m, n, mn, N_Element ;
    data = new int[ mn ] ;

    GetMatrix( data, &m, &n, &N_Element ) ;

    if( m <= 0 || n <= 0 || N_Element == 0 ) {
        return 0 ;
    }//end if

    mn = m * n  ;
    
    printf( "Matrix (%dx%d):\n", m, n ) ;
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j ++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for
        printf( "\n" ) ;
    }// end for
    return 0 ;

}//end function main

//===function===
void GetMatrix( int value[], int *row, int *col, int *pN_Element ) {

    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;

    char space ;
    *pN_Element = 1 ;

    if( *row <= 0 || *col <= 0 ) {
        printf("Error: Invalid matrix dimensions.") ;
    } else {
        printf( "Enter the matrix elements: " ) ;
        for( int i = 0 ; i < ( *row * *col ) ; i++ ) {
            scanf( "%d", &value[ i ] );
            space = getchar() ;
            if (space == '\n' && i != ( *row * *col ) - 1 ) {
                printf( "Error: Incorrect number of elements." ) ;
                *pN_Element = 0 ;
                break ;
            }//end if
        }// end for
    }//end if else
}//end function GetMatrix