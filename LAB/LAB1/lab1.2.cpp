#include <stdio.h>
#include <string.h>

//===prototype===
void GetSet( int aData[], int *pNum ) ;

//===main===
int main() {
    int *data, num ;
    data = new int [num] ;
    GetSet( data, &num ) ;
    for(int i =0 ; i < num ; i++){
        printf( "%d ", data[ i ] );
    }
    return 0 ;
}//end function main

//===function===
void GetSet( int aData[], int *pNum ) {
    scanf( "%d", pNum ) ;
    for( int i = 0 ; i < *pNum ; i++ ) {
        scanf( "%d", &aData[ i ] ) ;
    }//end for
}//end function GetSet