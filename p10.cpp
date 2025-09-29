#include <iostream>

int main() {
    int num1, max=0;
    std::cin>>num1;
    while (num1!=0) {
        if (num1>max) {
            max=num1;
        }
        std::cin>>num1;
    }
    std::cout<<"Max is "<<max<<std::endl;
    return 0;
}