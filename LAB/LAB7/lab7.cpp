#include <stdio.h>

//===prototype===
class Node {
    public:
        int Data;
        Node *Next;
        Node *Back;
    public:
        Node(int data = 0) : Data(data), Next(NULL), Back(NULL) {}
} ;

class DoubleLinkedList : Node {
    private:
        Node *head;
    public:
        DoubleLinkedList() : head(NULL) {}
        void AddNode() ;
        void InsertNode() ;
        void DeleteNode() ;
        void ShowFront() ;
        void ShowBack() ;
} ;

//===prototype===
int main() {
    DoubleLinkedList A, B;
    A.AddNode(); A.AddNode(); A.ShowFront();
    A.InsertNode(); A.InsertNode(); A.ShowFront();
    A.DeleteNode(); A.DeleteNode(); A.ShowFront();
    printf( "---\n" ) ;
    B.AddNode() ; B.AddNode() ; B.AddNode() ; B.ShowBack() ;
    return 0;
}

//===function===
void DoubleLinkedList :: ShowBack() {
    Node **Walk = &head ;
    while ( ( *Walk )->Next != NULL ) {
        Walk = &( *Walk )->Next ;
    }

    while (*Walk != NULL) {
        printf( "%d ", ( *Walk )->Data ) ;
        Walk = &( *Walk )->Back ;
    }
    printf( "\n" ) ;
}

void DoubleLinkedList :: ShowFront() {
    printf( "Show Front: " ) ;
    Node **Walk = &head ;
    while ( *Walk != NULL ) {
        printf( "%d ", ( *Walk )->Data );
        Walk = &( *Walk )->Next ;
    }
    printf( "\n" ) ;
}

void DoubleLinkedList :: DeleteNode() {

    int position ;
    printf( "Delete (pos): " ) ;
    scanf( "%d", &position ) ;

    Node **Walk = &head;

    for ( int i = 1 ; i < position && ( *Walk )->Next != NULL ; i++ ) {
        Walk = &( *Walk )->Next ;
    }

    Node *temp = *Walk ;

    if ( temp->Next != NULL ) {
        temp->Next->Back = temp->Back ;
    }
    if ( temp->Back != NULL ) {
        temp->Back->Next = temp->Next ;
    } else {
        head = temp->Next ;
    }
}

void DoubleLinkedList :: InsertNode() {
    
    int Data, position ;
    printf( "Insert (data pos) : " ) ;
    scanf( "%d %d", &Data, &position ) ;
    Node **Walk = &head;
    for( int i = 1 ; i < position && ( *Walk )->Next != NULL ; i ++ ){
        Walk = &( *Walk )->Next ;
    }//end for
    if ( ( *Walk )->Next == NULL ) {
        Node *temp1 = NULL ;
        temp1 = *Walk ;
        Walk = &( *Walk )->Next ;
        *Walk = new Node ;
        ( *Walk )->Data = Data ;
        ( *Walk )->Next = NULL ;
        ( *Walk )->Back = temp1 ;
    } else {
        Node *temp ;
        temp = new Node ;
        temp->Data = Data ;
        temp->Next = *Walk ;
        temp->Back = ( *Walk )->Back ;
        *Walk = temp ;
        ( *Walk )->Next->Back = *Walk ;
    }//end if else
}

void DoubleLinkedList :: AddNode() {
    int data ;
    printf("Add (data): ") ;
    scanf( "%d", &data ) ;

    Node *temp = NULL ;
    Node **Walk = &head ;

    while ( *Walk != NULL ) { 
        temp = *Walk ;
        Walk = &( *Walk )->Next ;
    }

    *Walk = new Node( data ) ;
    ( *Walk )->Back = temp ;
}
