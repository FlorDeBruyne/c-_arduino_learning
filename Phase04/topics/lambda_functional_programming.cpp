//    - Lambda Expressions and Functional Programming

#include <iostream>
#include <algorithm>
#include <cmath>

void abssort(float* x, unsigned n) {
    std::sort(x, x + n,
        // Lambda expression begins
        [](float a, float b) {
            return (std::abs(a) < std::abs(b));
        } // end of lambda expression
    );
}

// [=] () mutable throw() -> int { ... }
// 1. [=], capture clause/lambda-introducer
// 2. (), parameter list (Optional)
// 3. mutable = mutable specification (Optional)
// 4. throw(), exeption specification (Optional)
// 5. -> int, trailing return type (Optional)
// 6. {}, lambda body