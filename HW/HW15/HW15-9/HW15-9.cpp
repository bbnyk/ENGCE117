#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// Function prototype
void decrypt( char *text, int len ) ;

//===main===
int main()  {
    // Open the file in read mode
    FILE * file = fopen( "a15-9.txt" , "r" ) ;
    if ( file == NULL )  {
        printf( "Error opening file.\n" ) ;
        return 0 ;
    } //end if

    // Read the encrypted text
    char text[100] ;
    fgets( text, sizeof( text ), file ) ;
    int len = strlen( text ) ;
    if ( text == NULL ) {
        printf( "Error reading file.\n" ) ;
        fclose( file ) ;
        return 0 ;
    } //end if

    // Close the file
    fclose( file ) ;

    // Decrypt
    decrypt( text, len ) ;

    // Print the decrypted text
    printf( "Output : %s\n" , text ) ;

    return 0 ;
}//end main

// Function definition
void decrypt( char *text, int len ) {
    for( int i = 0 ; i < len ; i++ ) {
        switch( text[ i ] ) {
            case 'U' : 
                text[ i ] = 'A' ;
                break ;
            case 'V' : 
                text[ i ] = 'B' ;
                break ;
            case 'W' : 
                text[ i ] = 'C' ;
                break ;   
            case 'X' : 
                text[ i ] = 'D' ;
                break ;
            case 'Y' : 
                text[ i ] = 'E' ;
                break ;
            case 'Z' : 
                text[ i ] = 'F' ;
                break ;
            case 'A' : 
                text[ i ] = 'G' ;
                break ;   
            case 'B' : 
                text[ i ] = 'H' ;
                break ;
            case 'C' : 
                text[ i ] = 'I' ;
                break ;
            case 'D' : 
                text[ i ] = 'J' ;
                break ;
            case 'E' : 
                text[ i ] = 'K' ;
                break ;   
            case 'F' : 
                text[ i ] = 'L' ;
                break ;
            case 'G' : 
                text[ i ] = 'M' ;
                break ;
            case 'H' : 
                text[ i ] = 'N' ;
                break ;
            case 'I' : 
                text[ i ] = 'O' ;
                break ;   
            case 'J' : 
                text[ i ] = 'P' ;
                break ;
            case 'K' : 
                text[ i ] = 'Q' ;
                break ;   
            case 'L' : 
                text[ i ] = 'R' ;
                break ;
            case 'M' : 
                text[ i ] = 'S' ;
                break ;
            case 'N' : 
                text[ i ] = 'T' ;
                break ;
            case 'O' : 
                text[ i ] = 'U' ;
                break ;   
            case 'P' : 
                text[ i ] = 'V' ;
                break ;
            case 'Q' : 
                text[ i ] = 'W' ;
                break ;
            case 'R' : 
                text[ i ] = 'X' ;
                break ;
            case 'S' : 
                text[ i ] = 'Y' ;
                break ;   
            case 'T' : 
                text[ i ] = 'Z' ;
                break ;
        }//end switch case
    }//end for
}//end decrypt
