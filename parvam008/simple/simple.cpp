#include <iostream>

int main() {
    try {
        int age = 19;
        if (age < 18)
         {
            throw age;
        } else 
        {
            std::cout << "Access granted.\n";
        }
    } catch (int myNum) 
     {
        std::cout << "Access denied. Age is: " << myNum << "\n";
    }
    return 0;
}