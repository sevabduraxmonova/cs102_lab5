#include<iostream>
#include<cstdlib>

int main(){
    std::string guess, random;
    srand((unsigned) time(NULL));
    int rand_num = rand()%2;
    if (rand_num == 0) {
        random="even";
    }else {
        random="odd";
    }
    std::cout<<"Guess the random number - even or odd: ";
    std::cin>>guess;
    if (guess==random) {
        std::cout<<"Your guess is correct\n";
    }else {
        std::cout<<"Your guess is incorrect\n";
    }

    return 0;
}