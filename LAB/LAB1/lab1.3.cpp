#include <stdio.h>

//===prototype===
int *GetSet( int *pNum ) ;

//===main===
int main() {
    int *data, num ;
    data = GetSet( &num ) ; 

    printf( "Number of elements: %d\n", num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }//end for

    return 0 ;
}//end function main

//===function===
int *GetSet( int *pNum ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", pNum ) ;

    printf( "Enter the elements: " ) ;
    int *arrData ;
    arrData = new int[ *pNum ] ;
    for ( int i = 0 ; i < *pNum ; i++ ) {
        scanf( "%d", &arrData[ i ] ) ;
    }//end for
    return arrData ;
}//end function GetSet