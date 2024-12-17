#include <stdio.h>

int main() {

    float ax, ay, bx, by ;


    printf( "Input A Point : " ) ;
    scanf( "%f %f", &ax, &ay ) ;

    printf( "Input B Point : " ) ;
    scanf( "%f %f", &bx, &by ) ;


    printf( "Mid Point of A and B is ( %.1f, %.1f )", ( ax + bx ) / 2, ( ay + by ) / 2 ) ;

    return 0 ;
}//end main