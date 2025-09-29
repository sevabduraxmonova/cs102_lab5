#include <iostream>

int main() {
    int letters = 26;
    for (int i = 0; i < letters; ++i) {
        char a = 'A' + i;
        std::cout << a;

        if ((i % 5) != 4 && i != letters - 1) {
            std::cout << ' ';
        }

        if ((i % 5) == 4) {
            std::cout << '\n';
        }
    }

    if (letters % 5 != 0) std::cout << '\n';

    return 0;
}