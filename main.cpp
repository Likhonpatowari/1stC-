#include <iostream>

// C function declaration
void cFunction() {
    printf("This is a C function.\n");
}

int main() {
    // C++ for loop
    for (int i = 0; i < 5; ++i) {
        // C++ code inside the loop
        std::cout << "C++ Loop Iteration: " << i << std::endl;

        // C function call inside the loop
        cFunction();
    }

    // C code outside the loop
    printf("C Code outside the loop.\n");

    return 0;
}