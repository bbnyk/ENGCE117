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
void ShowAll( struct studentNode *walk ) ;
struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ) ; 
void InsNode( struct studentNode *now, char n[], int a, char s, float g ) ;
void DelNode( struct studentNode *now ) ; 

//===main===
int main() {
    struct studentNode *start, *now ;
    start = NULL ;

    now = AddNode( &start, "one", 6, 'M', 3.11 ) ;
    ShowAll( start ) ;

    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; 
    ShowAll( start ) ;

    InsNode( now, "three", 10, 'M', 3.33 ) ; 
    ShowAll( start ) ;

    while( now->next != NULL ) {
        now = now->next ;
    }//end while

    InsNode( now, "four", 12, 'F', 3.44 ) ; 
    ShowAll( start ) ;

    DelNode( now ) ; 
    ShowAll( start ) ;
}//end main

//===function===
struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ) {

	while( *walk != NULL ) {
		walk = &(*walk)->next; //เปลี่ยนจาก walk = &start หรือก็คือ *walk = start (walk ชี้ start) เป็น walk = &start->next หรือก็คือ *walk = start->next (walk ชี้ next) ซึ่งถ้าloopครบ walk จะชี้ next ตัวสุดท้าย
	}//end while

    *walk = new struct studentNode ;
    strcpy( ( *walk )->name, n ) ;
    ( *walk )->age = a ;
    ( *walk )->sex = s ;
    ( *walk )->gpa = g ;
    ( *walk )->next = NULL ;

    return *walk ;
}//end AddNode function

void InsNode( struct studentNode *now, char n[], int a, char s, float g ) {

    struct studentNode *newnode ;
    newnode = new struct studentNode ;
    strcpy( newnode->name, n );
    newnode->age = a ;
    newnode->sex = s ;
    newnode->gpa = g ;

    newnode->next = now->next ;
    now->next = newnode ;
}//end InsNode function

void DelNode( struct studentNode *now ){

    struct studentNode *temp ;
    temp = new struct studentNode ;
    temp = now->next->next ;
    now->next = temp ;
}//end DelNode function

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
        printf( "%s ", walk->name ) ;
        walk = walk->next ;
    }//end while
    printf( "\n" ) ;
}//end function