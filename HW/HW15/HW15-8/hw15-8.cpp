#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

//===Prototype===
void sortAZ( char items[][100], int n ) ;  
void sortZA( char items[][100], int n ) ;

//===main===
int main()  {
    // Open the file in read mode
    FILE * file = fopen( "a15-8.txt" , "r" ) ;
    if ( file == NULL )  {
        printf( "Error opening file.\n" ) ;
        return 1 ;
    } //end if

    // Variables to store each line and count items
    char line[100] ;
    char items[100][100] ;
    int n = 0 ;

    // Read the file line by line
    while ( fgets( line, sizeof( line ), file ) != NULL )  {
        // Remove the newline character at the end of the line
        line[strcspn( line, "\n" )] = '\0' ;
        // Copy the line into the items array
        strcpy( items[n], line ) ;
        n++ ;
    } //end for

    // Close the file
    fclose( file ) ;

    // Print the original output
    printf( "( %d Item ): " , n ) ;
    for ( int i = 0 ; i < n ; i++ )  {
        printf( "%s" , items[i] ) ;
        if ( i < n - 1 )  {
            printf( ", " ) ;
        } //end if
    } //end for
    printf( " .\n" ) ;

    // Sort items A to Z
    sortAZ( items, n ) ;

    // Print sorted output (A to Z)
    printf( "Sort ( A to Z )  : " ) ;
    for ( int i = 0 ; i < n ; i++ )  {
        printf( "%s" , items[i] ) ;
        if ( i < n - 1 )  {
            printf( ", " ) ;
        } //end if
    } //end for
    printf( " .\n" ) ;

    // Sort items Z to A
    sortZA( items, n ) ;

    // Print sorted output (Z to A)
    printf( "Sort ( Z to A )  : " ) ;
    for ( int i = 0 ; i < n ; i++ )  {
        printf( "%s" , items[i] ) ;
        if ( i < n - 1 )  {
            printf( ", " ) ;
        } //end if
    } //end for
    printf( " .\n" ) ;

    return 0 ;
}

//===functions===
void sortAZ( char items[][100], int n )  {
    for ( int i = 0 ; i < n - 1 ; i++ )  {
        for ( int j = 0 ; j < n - 1 - i ; j++ )  {
            if ( strcmp( items[j], items[j + 1] ) > 0 )  {
                char temp[100] ;
                strcpy( temp, items[j] ) ;
                strcpy( items[j], items[j + 1] ) ;
                strcpy( items[j + 1], temp ) ;
            } //end if
        } //end for
    } //end for
} 

void sortZA( char items[][100], int n )  {
    for ( int i = 0 ; i < n - 1 ; i++ )  {
        for ( int j = 0 ; j < n - 1 - i ; j++ )  {
            if ( strcmp( items[j], items[j + 1] ) < 0 )  {
                char temp[100] ;
                strcpy( temp, items[j] ) ;
                strcpy( items[j], items[j + 1] ) ;
                strcpy( items[j + 1], temp ) ;
            } //end if
        } //end for
    } //end for
}
