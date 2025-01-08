#include <stdio.h>

//===structure===
struct student {
    char name[ 20 ] ;
    int age ;
} ;

//===prototype===
void GetStudent( struct student child[][ 10 ], int *room ) ;

//===main===
int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    for( int i = 1 ; i <= group ; i ++ ) {
        printf( "Room %d: 10 students entered.\n", i ) ;
    }//end for
    return 0 ;
}//end function

//===function===
void GetStudent( struct student child[][ 10 ], int *room ) {

    printf( "Enter number of rooms : " ) ;
    scanf( "%d", room ) ;

    for( int i = 0 ; i < *room ; i ++ ) {
        printf( "Room %d:\n", i + 1 ) ;
        for( int j = 0 ; j < 10 ; j ++ ) {
            printf( "Student %d: ", j + 1 ) ;
            scanf( "%s", child[ i ][ j ].name ) ;
            printf( "Age : " ) ;
            scanf( "%d", &child[ i ][ j ].age ) ;
            printf( "\n" ) ;
        }//end for
    }//end for
}//end function GetStudent