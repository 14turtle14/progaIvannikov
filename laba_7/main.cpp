#include <iostream>
#include <algorithm>
#include "CircularBuffer.h"

int main() {

    circular_buffer<float> buf_float(3);
    buf_float.push_back(1.1);
    std::cout << buf_float << std::endl;
    buf_float.push_back(2.2);
    std::cout << buf_float << std::endl;
    buf_float.push_back(3.3);
    std::cout << buf_float << std::endl;
    buf_float.change_capacity(4);
    buf_float.push_back(-5.5);

    if (is_sorted(buf_float.begin(), buf_float.end())) {
        std::cout << "good" << std::endl;
    } else {
        std::cout << "not good" << std::endl;
    }

    sort(buf_float.begin(), buf_float.end());

    if (is_sorted(buf_float.begin(), buf_float.end())) {
        std::cout << "good" << std::endl;
    } else {
        std::cout << "not good" << std::endl;
    }
    std::cout << buf_float << std::endl;

    circular_buffer<CPoint<float>> buf_CPoint(3);
    CPoint<float> a(1.1, 1.1), b(2.2, 2.2), c(3.3, 3.3);
    buf_CPoint.push_back(a);
    buf_CPoint.push_back(b);
    buf_CPoint.push_back(c);
    buf_CPoint.push_back(c);
    //buf_CPoint.pop_front();
    std::cout << buf_CPoint << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}