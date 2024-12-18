#include <stdio.h>

int main () {

    float n, value, sum = 0, avg = 0 ;

    printf( "Enter value n : " ) ;
    scanf( "%f", &n ) ;

    for( int i = 1 ; i <= n ; i ++ ) {

        printf( "Enter value %d : ", i ) ;
        scanf( "%f", &value ) ;
        sum += value ;

    }//end for

    avg = sum / n ;

    printf( "Sum = %.0f\n", sum ) ;
    printf( "Avg = %.2f\n", sum ) ;

    return 0 ;
}//end main