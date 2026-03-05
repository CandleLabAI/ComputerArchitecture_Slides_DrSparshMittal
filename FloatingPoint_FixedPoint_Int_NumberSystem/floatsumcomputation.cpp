

#include <iostream>
  //  #include <cstdint> // For uint32_t
  //  #include <cstring> // For memcpy

int main() {
  float floatsum; 
  int i;
  long int longintsum=0;
  int intsum=0;
  floatsum = 0.0;
  for (i = 0; i < 1000000000; i++) {
    floatsum = floatsum + 1.0;
    longintsum =longintsum + 1;
    intsum =intsum + 1;
  }
  std::cout<<" floatsum "<<floatsum<<"\n";
  std::cout<<" longintsum "<<longintsum<<"\n";
  std::cout<<" intsum "<<intsum<<"\n";
  
  //printf("%f\n", sum);
  
}

/* 
 ULP is unit in the last place, represents the spacing between two consecutive floating-point numbers.
Let's walk through this:

We start sum at zero and add one each iteration.
Each time sum hits a power-of-two integer the exponent is increased by one and the size of a ULP is doubled.
When we reach sum = 2^23 = 8388608, then the size of a ULP is 1. (no rounding yet)
When we reach sum = 2^24 = 16777216, then the size of a ULP is two. (didnot round)
All remaining iterations attempt to add 1 which is 1/2 a ulp and sum is left unchanged (no rounding ever occurs)
*/
