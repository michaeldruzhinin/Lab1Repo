#include <iostream>

// ��������� ������� �� utils.cpp
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    int a = 5, b = 3;

    std::cout << add(a, b) << add(b, a) << std::endl;
    std::cout << subtract(a, b) << std::endl;
    std::cout << multiply(a, b) << std::endl;

    return 0;
}