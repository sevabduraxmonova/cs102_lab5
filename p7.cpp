#include <iostream>

int main() {
    int num;
    int count=0;
    std::cin >> num;
    for (int i=2; i<num; i++) {
        if (num%i==0) {
            count++;
        }
    }
    if (count==0) {
        std::cout<<"Number is prime\n";
    }else {
        std::cout<<"Number is not prime\n";
    }

    return 0;
}