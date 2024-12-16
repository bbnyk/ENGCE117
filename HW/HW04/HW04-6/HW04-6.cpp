#include <stdio.h>
#include <locale.h>

int main() {
    char id[ 11 ] ;
    float hour, salary ;
 
    setlocale( LC_NUMERIC, "" ) ;

    printf( "Input the Employees ID(Max. 10 chars): " ) ;
    scanf( "%s", id ) ;

    printf( "Input the working hrs: " ) ;
    scanf( "%f", &hour ) ;

    printf( "Salary amount/hr: " ) ;
    scanf( "%f", &salary) ;

    printf( "Employees ID = %s\n", id ) ;
    printf( "Salary = U$ %'.2f\n", hour * salary ) ;

    return 0 ;
}//end main
