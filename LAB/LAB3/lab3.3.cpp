#include <stdio.h>

//===structure===
struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

//===prototype===
struct student upgrade( struct student child ) ;

//===main===
int main() {
    struct student person ;
    printf( "sex = " ) ;
    scanf( "%c", &person.sex ) ;
    printf( "gpa = " ) ;
    scanf( "%f", &person.gpa ) ;

    person = upgrade( person ) ;

    printf( "%.2f", person.gpa ) ;
    return 0 ;
}//end function

//===function===
struct student upgrade( struct student child ) {

    if( ( child.sex == 'M' || child.sex == 'F' ) && child.gpa < 4.00 ) {
        if( child.sex == 'M'  ) {
            child.gpa += child.gpa / 10 ;
        } else {
            child.gpa += ( child ).gpa / 5 ;
        }//end if else
    }//end if

    return child ;

}//end function upgrade
