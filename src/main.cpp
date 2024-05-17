#include <iostream>
#include <antlr4-runtime.h>

int main() {
    std::ifstream t("/home/corey/code/cpp/threebolt/include/examplevisitor.h");
    std::stringstream buffer;
    buffer << t.rdbuf();
    auto s = buffer.str();

    std::cout << "Hello world!" << std::endl;
    return 0;
}