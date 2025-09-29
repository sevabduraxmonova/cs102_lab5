#include <iostream>

int main() {
    std::cout<<"Enter an integer, the input ends if it is 0: ";
    int num, positives=0, negatives=0, total=0;

    std::cin>>num;
    while (num!=0) {
        if (num>0) {
            positives++;
        }else {
            negatives++;
        }
        total+=num;
        std::cin>>num;
    }
    int count=positives+negatives;
    double avg = double(total) / double(count);
    std::cout<<"The number of positives is "<<positives<<"\n";
    std::cout<<"The number of negatives is "<<negatives<<"\n";
    std::cout<<"The total is "<<total<<"\n";
    std::cout<<"The average is "<<avg<<"\n";
    return 0;
}