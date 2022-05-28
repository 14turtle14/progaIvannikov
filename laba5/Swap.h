#ifndef LABA5_SWAP_H
#define LABA5_SWAP_H

template <class T>
int swap_numb(T& a, T& b)
{
    T t;
    t = a;
    a = b;
    b = t;
    return 0;
}

#endif //LABA5_SWAP_H
