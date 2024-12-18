#include <stdio.h>

int main () {

int num, sum = 1, i ;

scanf( "%d", &num ) ;
i = num ;
sum *= num ;
printf( "!%d = %d ", i, num ) ;
num -- ;

while( num != 0 ) {

    printf( "x %d ", num ) ;
    sum *= num ;
    num -- ;

}
printf( "\n!%d = %d", i, sum ) ;

return 0 ;

}