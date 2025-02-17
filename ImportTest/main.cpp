import std;
import LibraryTest;

int main() {
    std::cout << "Hello, World! " << Calculator::compute(6, 10, Operation::Add) << std::endl;
    return 0;
}
