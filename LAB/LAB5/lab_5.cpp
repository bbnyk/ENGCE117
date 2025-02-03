#include <stdio.h>

//===structure===
struct Node {
    int Data;
    struct Node *Next;
} typedef N;

//===prototype===
void AddNode(N **, int Data);
void InsertNode(N **, int Data, int position);
void DeleteNode(N **, int position);
void ShowNode(N **);

//===main===
int main() {
    N *start = NULL;
    int data = 0, pos = 0 ;
    printf( "Add (data) :" ) ; scanf( "%d", &data ) ; AddNode(&start, data);
    printf( "Add (data) :" ) ; scanf( "%d", &data ) ; AddNode(&start, data);
    printf( "Add (data) :" ) ; scanf( "%d", &data ) ; AddNode(&start, data);
    ShowNode( &start ); 

    printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos ) ; InsertNode(&start, data, pos);
    printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos ) ; InsertNode(&start, data, pos);
    printf( "Insert (data, pos) :" ) ; scanf( "%d %d", &data, &pos ) ; InsertNode(&start, data, pos);
    ShowNode(&start);

    printf( "Delete (pos) :" ) ; scanf( "%d", &pos ) ; DeleteNode(&start, pos);
    printf( "Delete (pos) :" ) ; scanf( "%d", &pos ) ; DeleteNode(&start, pos);
    printf( "Delete (pos) :" ) ; scanf( "%d", &pos ) ; DeleteNode(&start, pos);
    ShowNode(&start);

    return 0;
}//end main

//===function===
void AddNode(N **Walk, int Data) {
    while ( *Walk != NULL ) { 
        Walk = &( *Walk )->Next ;
    }//end while

    *Walk = new N ;
    ( *Walk )->Data = Data ;
    ( *Walk )->Next = NULL ;
}//end Addnode function

void ShowNode(N **Walk) {
    while( *Walk != NULL ) {
        printf( "%d ", ( *Walk )->Data ) ;
        Walk = &(*Walk)->Next ;
    }//end while
    printf( "\n" ) ;
}//end ShowNode function

void InsertNode(N **Walk, int Data, int position) {
    for( int i = 1 ; i < position ; i ++ ){
        Walk = &(*Walk)->Next ;
    }//end for
    N *temp ;
    temp = new N ;
    temp->Data = Data ;
    temp->Next = *Walk ;
    *Walk = temp ;
}//end InsertNoode function

void DeleteNode(N **Walk, int position) {
    for( int i = 1 ; i < position ; i ++ ){
        Walk = &(*Walk)->Next ;
    }//end for
    N *temp ;
    temp = ( *Walk )->Next ;
    *Walk = temp ;
}//end DeleteNode function
