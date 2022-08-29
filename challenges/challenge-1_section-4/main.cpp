#include <iostream>

int test(int number) {
    return number;
}

int main() {
    int favorite_number;
    int x = test(1000);
    
    std::cout << x;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    
    if (favorite_number > 100 || favorite_number < 1) {
        std::cout << "That number is out of this scope...";
        
        return favorite_number;
    }
    
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!! " << favorite_number << " is my favorite number!" << std::endl;
    
    return favorite_number;
}