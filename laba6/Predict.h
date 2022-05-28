#ifndef LABA6_PREDICT_H
#define LABA6_PREDICT_H

#include <iostream>

template<class T>
bool eqOne(const T& value) {
    if (value == 1) return true;
    else return false;
}
template<class T>
bool eqNull(T value) {
    return (value == 0);
}
template<class T>
bool isMore(const T a, const T b) {
    return (a > b);
}
template<class T>
bool isLess(const T a, const T b) {
    return (a < b);
}
template<class T>
bool isEqual(const T a, const T b) {
    return (a == b);
}

template<class T, class Func>
bool Any_of(const T& begin, const T& end, const Func& func) {   // 2
    for (T i = begin; i < end; i++) {
        if (func(*i))
            return true;
    }
    return false;
}

template <class T, class Func>
bool Is_partitioned(const T& begin, const T& end, const Func& func) { // 6
    int counter = 0;
    for (T i = begin; i < end - 1; i++) {
        if (func(*i) != func(*(i + 1))) {
            counter++;
        }
    }
    if (counter == 1) {
        return true;
    }
    else {
        return false;
    }
}

template<class T, class Func>
bool is_palindrome(const T& begin, const T& end, const Func& func) { // 9
    for (T i = begin, j = end - 1; i < j; i++, j--) {
        if (!func(*i, *j))
            return false;
    }
    return true;
}

#endif //LABA6_PREDICT_H
