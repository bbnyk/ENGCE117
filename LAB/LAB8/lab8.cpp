#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Customer {
    public :
        char Name[20] ;
        int Age ;
        char Category[20] ;
        char Product[20] ;
        float Price ;
    public : 
        void GetCustomerInfo( char StrMode[ 50 ] ) ;
} ;

class FileHandler {
    public :
        FILE *fp ;
        char FilePath[ 100 ] ;
        Customer C[ 500 ] ;
        int MaxCustomer ;
    public :
        FileHandler( char FilePath[ 100 ] ) ;
        void GetFilePath() ;
        void ReadFile() ;
        void SelectMode() ;
} ;

int main() {
    FileHandler *F = new FileHandler( "customer.csv" ) ;
    while( 1 ) F->SelectMode() ;
    return 0;
}

void FileHandler :: SelectMode() {
    int Mode = 0 ;
    printf( "Select Mode : " ) ;
    scanf( "%d", &Mode ) ;

    if( Mode == 0 ) { //Exit
        printf( "Thank you!." ) ;
        exit(0) ;
    } else if( Mode == 1 ) { //Who bought higest price
        float max = -9999 ;
        Customer higest_price ;
        for ( int i = 0 ; i < MaxCustomer ; i ++) {
            if ( C[i].Price > max) {
                max = C[i].Price ;
                Customer higest_price = C[i] ;
            }
        }
        higest_price.GetCustomerInfo("Who bought highest price.");
        
    } else if( Mode == 2 ) { //Lines of file
        printf( "File data = %d records.\n", this->MaxCustomer ) ;
        
    } else if( Mode == 3 ) { //Average Price
        float avg_price = 0  ;
        for ( int i = 0 ; i < MaxCustomer ; i ++) {
           avg_price += C[i].Price ;
        }
        printf( "Average price = %.2f\n", avg_price/MaxCustomer ) ;
        
    } else if( Mode == 4 ) { //Count People who age above average.
        float avg_age = 0 ;
        for ( int i = 0 ; i < MaxCustomer ; i ++) {
           avg_age += C[i].Age ;
        }
        printf( "Average age = %.2f\n", avg_age/MaxCustomer ) ;
        
    } else if( Mode == 5 ) { //Most Popular Product
        int count[ 100 ], most_amount = -9999 ;
        char product[ 100 ][ 100 ], most_product[ 100 ] ;
            for ( int i = 0 ; i < MaxCustomer ; i++ ) {
                if( i == 0 ) {
                    for( int j = 0 ; j < MaxCustomer ; j++ ) {
                        if ( strcmp( C[ i ].Product, C[ j ].Product ) == 0 ) {
                            count[ i ] ++ ;
                            strcpy( product[ i ], C[ j ].Product ) ;
                        }
                    }
                } else {
                    int token = 0 ;
                    for( int n = 1 ; n <= i ; n++ ) {
                        if ( strcmp( C[ i ].Product, C[ i - n ].Product ) == 0 ){
                            token = 1 ;
                        } 
                    }
                    for( int j = 0 ; j < MaxCustomer && token == 0 ; j++ ) {
                        if ( strcmp( C[ i ].Product, C[ j ].Product ) == 0 ){
                            count[ i ] ++ ;
                            strcpy( product[ i ], C[ j ].Product ) ;
                        }
                    }
                }
                if( count[ i ] > most_amount ) {
                    most_amount = count[ i ] ;
                    strcpy( most_product, C[ i ].Product ) ;
                }
            }
        printf( "Most popular product = %s (sold %d times).\n" , most_product , most_amount ) ;
        
    } else if( Mode == 6 ) { //Least Popular Product
        int count[ 100 ], least_amount = 9999 ;
        char product[ 100 ][ 100 ], least_product[ 100 ] ;
            for ( int i = 0 ; i < MaxCustomer ; i++ ) {
                if( i == 0 ) {
                    for( int j = 0 ; j < MaxCustomer ; j++ ) {
                        if ( strcmp( C[ i ].Product, C[ j ].Product ) == 0 ) {
                            count[ i ] ++ ;
                            strcpy( product[ i ], C[ j ].Product ) ;
                        }
                    }
                } else {
                    int token = 0 ;
                    for( int n = 1 ; n <= i ; n++ ) {
                        if ( strcmp( C[ i ].Product, C[ i - n ].Product ) == 0 ){
                            token = 1 ;
                        } 
                    }
                    for( int j = 0 ; j < MaxCustomer && token == 0 ; j++ ) {
                        if ( strcmp( C[ i ].Product, C[ j ].Product ) == 0 ){
                            count[ i ] ++ ;
                            strcpy( product[ i ], C[ j ].Product ) ;
                        }
                    }
                }
                if( count[ i ] < least_amount ) {
                    least_amount = count[ i ] ;
                    strcpy( least_product, C[ i ].Product ) ;
                }
            }
        printf( "Most popular product = %s (sold %d times).\n" , least_product , least_amount ) ;
    } else {
        printf( "\nThank you!." ) ;
        exit(0) ;
    }
}

FileHandler :: FileHandler( char FilePath[ 100 ] ) {
    strcpy( this->FilePath, FilePath ) ;
    this->ReadFile() ;
}

void FileHandler :: ReadFile() {
    fp = fopen( "C:/code/customer.csv" , "r");
    if ( fp == NULL) {
        printf( "Can't open file" ) ;
        exit ( 0 ) ;
    } 

    char line[100] ;
    int n = 0 ;
    while ( fgets(line, sizeof(line), fp) != NULL ) {
        char *token = strtok( line , "," ) ;
        strcpy( C[ n ].Name , token ) ;
        token = strtok( NULL , "," ) ;
        C[ n ].Age = atoi(token) ;
        token = strtok( NULL , "," ) ;
        strcpy( C[ n ].Category , token ) ;
        token = strtok( NULL , "," ) ;
        strcpy( C[ n ].Product , token ) ;
        token = strtok( NULL , "," ) ;
        C[ n ].Price = atof( token ) ;
        
        this->MaxCustomer ++ ;
        n++ ;
   
    }

}

void Customer :: GetCustomerInfo( char StrMode[ 50 ] ) {
    printf( "--------| %-8s\n", StrMode ) ;
    printf( "%-8s : %-10s\n", "Name", this->Name ) ; 
    printf( "%-8s : %-4d\n", "Age", this->Age ) ;
    printf( "%-8s : %-10s\n", "Category", this->Category ) ; 
    printf( "%-8s : %-10s\n", "Product", this->Product ) ; 
    printf( "%-8s : %-5.2f\n", "Price", this->Price ) ; 
}

void FileHandler :: GetFilePath() {
    printf("Current file path: %s\n", this->FilePath);
}
