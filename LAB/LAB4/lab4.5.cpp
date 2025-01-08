#include <stdio.h>
#include <string.h>

//===structure===
struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

//===prototype===
void saveNode( struct studentNode *child, char n[], int a, char s, float g ) ;
void GoNext1( struct studentNode **walk ) ;

//===main===
int main() {

    struct studentNode *start, *now1, **now2 ;
    start = new struct studentNode ;
    saveNode( start, "one", 6, 'M', 3.11 ) ;

    start->next = new struct studentNode ;
    saveNode( start->next, "two", 8, 'F', 3.22 ) ;
    
    start->next->next = new struct studentNode ;
    saveNode( start->next->next, "three", 10, 'M', 3.33 ) ;

    start->next->next->next = new struct studentNode ;
    saveNode( start->next->next->next, "four", 12, 'F', 3.44 ) ;

    now1 = start ;
    now2 = &start ;

    GoNext1( now2 ) ;
    printf( "%s" , ( *now2 )->name ) ;

    return 0 ;
}//end function

//===function===
void saveNode( struct studentNode *child, char n[], int a, char s, float g ) {
    strcpy( child->name, n ) ;
    child->age = a ;
    child->sex = s ;
    child->gpa = g ;
    child->next = NULL ;
}//end saveNode function

void GoNext1( struct studentNode **walk ) {
    if ( *walk != NULL ) {
        *walk = ( *walk )->next ;
    }//end if
}//end GoNext1 function