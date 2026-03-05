

#include <iostream>
    #include <cstdint> // For uint32_t
    #include <cstring> // For memcpy

    int main() {
        float p= 2.3;
        float q=p;
        
        if(p==q)
            std::cout<<" p and q are equal \n";
        else
            std::cout<<" p and q are not equal \n";
        
        
        float f = 0.0f;
        uint32_t bits =2139095041; // This is equal to 01111111100000000000000000000001, which is a NaN
        //std::cout << "Original float: " << f << std::endl;
        
        // Copy the modified bit pattern back to the float
        std::memcpy(&f, &bits, sizeof(float));        

        std::cout << "Its float value " << f << std::endl;
        float g = f;
        if(f==g)
            std::cout<<" They are equal \n";
        else
            std::cout<<" They are not equal \n";
        
        uint32_t inf = 2139095040; //This is equal to 01111111100000000000000000000000, which is infinity.
        
        // Copy the modified bit pattern back to the float
        std::memcpy(&g, &inf, sizeof(float));        
        std::cout << "Float value of g " << g << std::endl;
        return 0;
    }
