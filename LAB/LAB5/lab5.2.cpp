#include <stdio.h>
#include <string.h>

//===structure===
struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

//===prototype===
void ShowAll( struct studentNode **walk ) ;
void InsNode( struct studentNode **now, char n[], int a, char s, float g ) ;
void GoNext( struct studentNode ***walk ) ;
void DelNode( struct studentNode **now ) ;

//===main===
int main() {
    struct studentNode *start, **now ;
    start = NULL ; 
    now = &start ;
    InsNode( now, "one", 6, 'M', 3.11 ) ; 
    ShowAll( &start ) ;
    InsNode( now, "two", 8, 'F', 3.22 ) ; 
    ShowAll( &start ) ;
    GoNext( &now ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; 
    ShowAll( &start ) ;
    GoNext( &now ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; 
    ShowAll( &start ) ;
    DelNode( now ) ; 
    ShowAll( &start ) ;
    return 0 ;
}//end function

//===function===
void InsNode( struct studentNode **now, char n[], int a, char s, float g ) {

    struct studentNode *temp ;
    temp = new struct studentNode ;

    strcpy(temp->name, n);
    temp->age = a ;
    temp->sex = s ;
    temp->gpa = g ;

    temp->next = *now ;
    *now = temp ; 
}//end InsNode function

void GoNext( struct studentNode ***walk ) {

    while( **walk != NULL ) {
        ( *walk ) = &( **walk )->next ; // เปลี่ยนจากตอนแรกที่ *walk = &(**walk) หรือก็คือ now ชี้ start เป็น *walk = &start->next หรือก็คือ now ชี้ next ตัวถัดไป
    }//end while
}//end GoNext function

void DelNode( struct studentNode **now ) {

    struct studentNode *temp ;
    temp = ( *now )->next ;
    *now  = temp ;
}//end DelNode function

void ShowAll( struct studentNode **walk ) {
    while( *walk != NULL ) {
        printf( "%s ", (*walk)->name ) ;
        walk = &(*walk)->next ;
    }//end while
    printf( "\n" ) ;
}//end function