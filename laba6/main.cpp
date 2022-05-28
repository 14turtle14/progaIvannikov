#include <iostream>
#include <vector>
#include "Poin.h"
#include "Predict.h"

int main() {
    std::vector<int> onlyOne{1, 4, 0, 0, 2, -7};
    std::cout << "Any_of = " << Any_of(onlyOne.cbegin(), onlyOne.cend(), eqOne<int>) << std::endl;

    std::vector<int> partitioned{6, 4, 3, 1, 1, 1, 1};
    std::cout << "Is_partitioned = " << Is_partitioned(partitioned.cbegin(), partitioned.cend(), eqOne<int>)
              << std::endl;


    std::vector<int> symmetric{3, 2, 1, 0, 1, 2, 3};
    std::cout << "is_palindrome = " << is_palindrome(symmetric.cbegin(), symmetric.cend(),
                                                     isEqual<int>) << std::endl;

    Point n1(1, 0), n2(1, 0), n3(1, 0);
    std::vector<Point> arrPoint = {n1, n2, n3};

    std::cout << "Any_of = " << Any_of(arrPoint.cbegin(), arrPoint.cend(), eqOne<Point>) << std::endl;

    std::vector<Point> arrPointPal = {n1, n2, n3, n2, n1};
    std::cout << "is_palindrome = " << is_palindrome(arrPointPal.cbegin(), arrPointPal.cend(), isEqual<Point>)
              << std::endl;
    return 0;
}