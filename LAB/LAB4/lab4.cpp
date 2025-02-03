#include <stdio.h>
#include <string.h>
#include <math.h>

//===structure===
struct studentNode {
    char name[20];
    int age;
    float gpa;
    struct studentNode *next ;
} typedef Node ;

//===prototype===
void saveNode( Node *child ) ;
void GoNext( Node **now ) ; //Prient Current, then move

//===main===
int main() {
    Node *start, *now ;
    start = new Node ;
    saveNode( start ) ;

    start->next = new Node ;
    saveNode( start->next ) ;

    start->next->next = new Node ;
    saveNode( start->next->next ) ;

    now = start ;
    GoNext( &now ) ; GoNext( &now ) ; GoNext( &now ) ;
    return 0;
}//end main

//===function===
void saveNode( Node *child ) {
    printf( "Enter (Name Age GPA) : " ) ;
    scanf( "%s %d %f", child->name, &(child->age), &(child->gpa) ) ;
    child->next = NULL ;
    child->gpa = round( ( child->gpa * 10 ) ) / 10 ;
}//end function saveNode

void GoNext( Node **now ) {
    printf( "[%s, %d, %.1f]\n", (*now)->name, (*now)->age, (*now)->gpa ) ;
    *now = (*now)->next ;
}//end function GoNext