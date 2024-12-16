#include <stdio.h>

int main() {
    float c ;

    printf( "Enter temperature in Celsius: ") ;
    scanf( "%f", &c ) ;

    printf( "%.0f degree Celsius = %.1f degree Fahrenheit\n", c, ( c * 9 / 5 ) + 32 ) ;

    return 0 ;
}//end main
