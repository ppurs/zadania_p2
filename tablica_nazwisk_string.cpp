#include <iostream>

int main() {
    int n;

    std::cin >> n;
    std::string tab[ n ];

    for ( int i = 0; i < n; i++ ) {
        std::cin >> tab[ i ];
    }

    return 0;
}
