#include <iostream>

int main() {
    // Sequential Execution
    std::cout << "Start of the program" << std::endl;

    // Conditional Statements
    int x = 10;
    if (x > 5) {
        std::cout << "x is greater than 5" << std::endl;
    } else {
        std::cout << "x is not greater than 5" << std::endl;
    }

    // else if ladder
    if (x == 10) {
        std::cout << "x is 10" << std::endl;
    } else if (x == 20) {
        std::cout << "x is 20" << std::endl;
    } else {
        std::cout << "x is neither 10 nor 20" << std::endl;
    }

    // switch statement
    switch (x) {
        case 10:
            std::cout << "x is 10 (switch)" << std::endl;
            break;
        case 20:
            std::cout << "x is 20 (switch)" << std::endl;
            break;
        default:
            std::cout << "x is neither 10 nor 20 (switch)" << std::endl;
            break;
    }

    // Loops
    // for loop
    for (int i = 0; i < 5; ++i) {
        std::cout << "for loop iteration: " << i << std::endl;
    }

    // while loop
    int count = 0;
    while (count < 5) {
        std::cout << "while loop iteration: " << count << std::endl;
        ++count;
    }

    // do-while loop
    count = 0;
    do {
        std::cout << "do-while loop iteration: " << count << std::endl;
        ++count;
    } while (count < 5);

    // Jump Statements
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            break; // exit the loop when i is 5
        }
        if (i % 2 == 0) {
            continue; // skip the rest of the loop iteration for even numbers
        }
        std::cout << "Jump statement iteration: " << i << std::endl;
    }

    std::cout << "End of the program" << std::endl;
    return 0;
}