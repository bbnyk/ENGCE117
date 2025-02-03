
#include <stdio.h>

//===Structure===
struct Node {
    int Data;
    struct Node *Next;
    struct Node *Back;
} typedef N;

//===Prototype===
void AddNode(N **, int *Data);
void InsertNode(N **, int *Data, int *pos);
void DeleteNode(N **, int *pos);
void SwapNode(N **, int *pos1, int *pos2);
void ShowFront(N **);
void ShowBack(N **);

//===Main===
int main() {
    N *start = NULL;
    int data = 0, pos1 = 0, pos2 = 0;

    AddNode(&start, &data); AddNode(&start, &data); AddNode(&start, &data);
    ShowFront(&start);
    ShowBack(&start);

    InsertNode(&start, &data, &pos1); InsertNode(&start, &data, &pos1); InsertNode(&start, &data, &pos1);
    ShowFront(&start);

    DeleteNode(&start, &pos1); DeleteNode(&start, &pos1);
    ShowFront(&start);

    SwapNode(&start, &pos1, &pos2); ShowFront(&start);
    return 0;
}//end main

//===Functions===
void AddNode(N **Walk, int *Data) {

    printf( "Add (data) : " ) ;
    scanf( "%d", Data ) ;

    N *temp = NULL ;
    while ( *Walk != NULL ) { 
        temp = *Walk ;
        Walk = &( *Walk )->Next ;
    }//end while

    *Walk = new N ;
    ( *Walk )->Data = *Data ;
    ( *Walk )->Next = NULL ;
    ( *Walk )->Back = temp ;
}//end AddNode function

void ShowFront(N **Walk) {
    printf( "Show Front : " ) ;
    while( *Walk != NULL ) {
        printf( "%d ", ( *Walk )->Data ) ;
        Walk = &(*Walk)->Next ;
    }//end while
    printf( "\n" ) ;
}//end ShowFront function

void ShowBack(N **Walk) {
    printf( "Show Back : " ) ;
    while( ( *Walk )->Next != NULL ) {
        Walk = &( *Walk )->Next ;
    }//end while
    
    while( *Walk != NULL ) {
        printf( "%d ", ( *Walk )->Data ) ; 
        Walk = &( *Walk )->Back ;
    }//end while
    printf( "\n" ) ;
}//end ShowBack function   

void InsertNode(N **Walk, int *Data, int *position) {

    printf( "Insert (data pos) : " ) ;
    scanf( "%d %d", Data, position ) ;
    for( int i = 1 ; i < *position && (*Walk)->Next != NULL ; i ++ ){
        Walk = &(*Walk)->Next ;
    }//end for
    if ( (*Walk)->Next == NULL ) {
        N *temp1 = NULL ;
        temp1 = *Walk ;
        Walk = &( *Walk )->Next ;
        *Walk = new N ;
        ( *Walk )->Data = *Data ;
        ( *Walk )->Next = NULL ;
        ( *Walk )->Back = temp1 ;
    } else {
        N *temp ;
        temp = new N ;
        temp->Data = *Data ;
        temp->Next = *Walk ;
        temp->Back = ( *Walk )->Back ;
        *Walk = temp ;
        ( *Walk )->Next->Back = *Walk ;
    }//end if else
}//end InsertNode function

void DeleteNode(N **Walk, int *position) {
    
    printf( "Delete (pos) : " ) ;
    scanf( "%d", position ) ;
    for( int i = 1 ; i < *position ; i ++ ){
        Walk = &(*Walk)->Next ;
    }//end for
    N *temp ;
    temp = ( *Walk )->Next ;
    temp->Back = ( *Walk )->Back ;
    *Walk = temp ;
    ( *Walk )->Next->Back = *Walk ;

}//end DelNode function

void SwapNode(N **Walk, int *position1, int *position2) {
    printf( "Swap (pos1 pos2) : " ) ;
    scanf( "%d %d", position1, position2 ) ;

    for( int i = 1 ; i < *position1 ; i ++ ){
        Walk = &(*Walk)->Next ;
    }//end for

    int temp1 ;
    temp1 = ( *Walk )->Data ;

    for( int i = 1 ; i < *position2 ; i ++ ){
        Walk = &(*Walk)->Next ;
    }//end for

    int temp2 ;
    temp2 = ( *Walk )->Data ;
    ( *Walk )->Data = temp1 ;

    while( ( *Walk )->Back != NULL ) {
        Walk = &( *Walk )->Back ;
    }// end while
    
    for( int i = 1 ; i < *position1 ; i ++ ){
        Walk = &(*Walk)->Next ;
    }//end for

    ( *Walk )->Data = temp2 ;
}//end SwapNode function
