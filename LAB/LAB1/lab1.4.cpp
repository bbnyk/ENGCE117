#include <stdio.h>

//===prototype===
int GetSet( int arrData[] ) ;

//===main===
int main() {
    int *data, num ;
    data = new int[ num ] ;
    num = GetSet( data ) ;
    printf( "Number of elements: %d\n", num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }//end for

    return 0 ;
}//end function main

//===function===
int GetSet( int arrData[] ) {

    int n ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &n ) ;

    printf( "Enter the elements: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        scanf( "%d", &arrData[ i ] ) ;
    }//end for

    return n ;
}//end function GetSet