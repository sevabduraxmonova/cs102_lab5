#include <iostream>

int main() {
    int num;
    std::cin >> num;
    if (num==0) {
        std::cout<<0;
    }

    while (num>0) {
        int digit = num%10;
        std::cout<<digit;
        num = num/10;
    }

    return 0;
}