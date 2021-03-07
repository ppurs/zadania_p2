#include <iostream>

int main() {
    int n;
    int size = 0;

    std::cin >> n;
    char n_char = getchar();            // wczytuje znak nowej linii po 'n'

    char** tab = new char* [ n ];

    for ( int i = 0; i < n; i++ ) {
        char letter;

        letter = getchar();
        char* temp = new char[ 50 ];

        for ( size = 0; letter != '\r' && letter != '\n'; size++ ) {
            temp[ size ] = letter;
            letter = getchar();
           }
        temp[ size ] = '\0';

        tab[ i ] = new char[ size + 1 ];       //bo tablica ma mieć wymiar: liczba znaków + 1
        int k = 0;
        for ( k = 0; k < size + 1 ; k++) {
            tab[ i ][ k ] = temp [ k ];
        }

        delete[] temp;
    }

    for ( int j = 0; j < n; j++ ) {
        delete[] tab[ j ];
        tab[ j ] = NULL;
        }

    delete[] tab;

    return 0;
}
