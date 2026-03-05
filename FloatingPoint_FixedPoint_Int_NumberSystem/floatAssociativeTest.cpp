#include<iostream>
int main() {    
    double a = 1e30, b = -1e30, c = 1;
    double sum1 = (a+b)+c;
    double sum2 = a+(b+c);
    std::cout<<" sum1 "<<sum1<<" sum2 "<<sum2<<"\n";    
    }
