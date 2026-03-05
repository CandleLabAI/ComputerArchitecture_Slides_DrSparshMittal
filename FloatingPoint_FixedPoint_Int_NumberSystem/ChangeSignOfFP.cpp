
//To run this program, add -std=c++11 to the compiler options.
#include <iostream>
//    #include <cstdint> // For uint32_t
    #include <cstring> // For memcpy

    int main() {
        float f = -12.345f;
        //uint32_t bits;
        int bits; 
        std::cout << "Original float: " << f << std::endl;

        // Copy float's bit pattern to an unsigned integer
        std::memcpy(&bits, &f, sizeof(float));

        // Perform bitwise operations on 'bits'
        // Example: Clear the sign bit (assuming IEEE 754 single precision)
        //bits &= ~(1u << 31);
        
        // Example: Complement the sign bit (assuming IEEE 754 single precision)
        bits = bits xor (1u << 31); 

        // Copy the modified bit pattern back to the float
        std::memcpy(&f, &bits, sizeof(float));

        std::cout << "Modified float: " << f << std::endl;
        return 0;
    }
