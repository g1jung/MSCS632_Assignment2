#include <iostream>
#include <functional>

std::function<int(int)> makeMultiplier(int factor) {
    return [factor](int x) { return x * factor; };
}

int main() {
    auto times3 = makeMultiplier(3);
    auto times5 = makeMultiplier(5);
    
    std::cout << times3(4) << std::endl;  // 12
    std::cout << times5(4) << std::endl;  // 20
    return 0;
}