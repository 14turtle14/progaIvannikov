#include <iostream>
#include <ostream>
#include <algorithm>
#include "CircularBuffer.h"

int main() {
    Circular_Buffer<int> buffer(5);

    buffer.push_back(1);
    buffer.push_back(2);
    buffer.push_back(3);

    std::cout << buffer;

    buffer.pop_front();

    buffer.push_back(4);

    std::cout << buffer;

    std::sort(buffer.begin(), buffer.end());
    std::cout << buffer;

    auto result = std::max_element(buffer.begin(), buffer.end());
    std::cout << "max = " << *result << std::endl;

    return 0;
}