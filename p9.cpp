#include <iostream>

int main() {
    int num, ans, sum=0;
    std::cin>>num;
    for (int i=1; i<=num; i++) {
        ans=i*i;
        std::cout<<i<<"*"<<i<<"="<<ans<<std::endl;
        sum+=ans;
    }
    std::cout<<"Sum of the series is: "<<sum<<"\n";
    return 0;
}