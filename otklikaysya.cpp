#include <iostream>
#include <string>

void greet(const std::string& name) {
    std::cout << "Откликайся скорее, " << name << "!" << std::endl;
}

int main() {
    greet("друг");
    return 0;
}
