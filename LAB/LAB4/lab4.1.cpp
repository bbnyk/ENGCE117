#include <stdio.h>

//===prototype===
void go( int **p, int *z ) ;


//===main===
int main() {
    int *a, b = 10, c = 20 ;
    go( &a, &b ) ;
    printf( "%d %p %p\n", *a, a, &a ) ;
    go( &a, &c ) ;
    printf( "%d %p %p\n", *a, a, &a ) ;
    return 0 ;
}//end main

//===function===
void go( int **p, int *z ) {
    **p = *z ;
}//end go function