export module LibraryTest;

export enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

export struct Calculator {
    static int compute(int a, int b, Operation op);
};
