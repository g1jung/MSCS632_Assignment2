#include <iostream>

void changeValue(int* n) {
    *n += 5;
}

int main() {
    int* num = new int(10);  // Manual heap allocation
    std::cout << "Original: " << *num << std::endl;

    changeValue(num);
    std::cout << "After change: " << *num << std::endl;

    delete num;  // Manual deallocation
    return 0;
}