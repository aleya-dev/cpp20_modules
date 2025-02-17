export module LibraryTest:impl;

import LibraryTest;
import std;

int Calculator::compute(int a, int b, Operation op) {
    switch (op) {
        case Operation::Add: return a + b;
        case Operation::Subtract: return a - b;
        case Operation::Multiply: return a * b;
        case Operation::Divide: 
            if (b == 0) throw std::runtime_error("Division by zero");
            return a / b;
    }
    return 0;
}
