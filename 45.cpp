#include <iostream>
#include <cstring> 

int main() {
    
    const char* cStyleString = "welcome to c++ program";

    size_t length = 7; 
    
    char extractedString[8]; 
    
    strncpy(extractedString, cStyleString, length);

    extractedString[length] = '\0';

    std::cout << "Extracted substring: " << extractedString << std::endl;

    return 0;
}