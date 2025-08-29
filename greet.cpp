#include <iostream>
#include <string>

void greet(const std::string& name) {
    std::cout << "Откликайся скорее, " << name << "!" << std::endl;
}

void extraCallToAction() {
    std::cout << "Не упусти шанс откликнуться!" << std::endl;
    std::cout << "Скорее присылай отклик!" << std::endl;
}

int main() {
    greet("друг");
    extraCallToAction();
    greet("команда");
    extraCallToAction();
    return 0;
}
