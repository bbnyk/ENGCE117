#include <stdio.h>

//===prototype===
int *GetMatrix( int *row, int *col, int *pN_Element ) ;

//===main===
int main() {
    int *data, m, n, N_Element ;
    data = GetMatrix( &m, &n, &N_Element ) ;

    if( N_Element == 0 ) {
        return 0 ;
    }//end if

    printf( "Enter number of rows and columns: %d %d\n", m, n ) ;

    if( m <= 0 || n <= 0 ) {
        return 0 ;
    }//end if

    printf( "Enter matrix elements: \n" ) ;
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j ++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for
        printf( "\n" ) ;
    }// end for

    return 0 ;

}//end function main

//===function===
int *GetMatrix( int *row, int *col, int *pN_Element ) {

    int *arrData, rowcol ;
    char space ;
    *pN_Element = 1 ;
    
    scanf( "%d", row ) ;
    scanf( "%d", col ) ;

    rowcol = *row * *col ;
    arrData = new int[ rowcol ] ;

    if( *row <= 0 || *col <= 0 ) {
        return 0 ;
    }//end if

    for( int i = 0 ; i < *row ; i++ ) {
        for( int j = 0 ; j < *col ; j++ ) {
            scanf( "%d", &arrData[ i * *col + j ] ) ;
            space = getchar() ;
            if ( space == '\n' && j != ( *col ) - 1 ) {
                printf( "Error: Incorrect number of elements." ) ;
                *pN_Element = 0 ;
            break ;
            }//end if
        }//end for
        if( *pN_Element == 0 ) {
            break ;
        }//end if
    }//end for

    return arrData ;

}//end function GetMatrix