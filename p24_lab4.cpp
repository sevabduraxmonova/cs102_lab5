#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand((unsigned) time(NULL));
    int a=10, b=99;
    int rand_num=a+rand()%(b-a+1);;
    int num;
    cout<<"Guess a two-digit integer: ";
    cin>>num;
    int f_rand, f_guess, l_rand, l_guess;
    f_rand=rand_num/10;
    f_guess=num/10;
    l_rand=rand_num%10;
    l_guess=num%10;
    if (rand_num==num) {
        cout<<"Accuracy is 100%\n";
    }else if (f_rand==f_guess || l_rand==l_guess) {
        cout<<"Accuracy is 50%\n";
    }else {
        cout<<"Accuracy is 0%\n";
    }


    return 0;
}