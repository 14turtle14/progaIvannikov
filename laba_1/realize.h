#ifndef LABA_1_REALIZE_H
#define LABA_1_REALIZE_H

#include <cmath>

// 3

void Changes(int *, int *);
void Changes(int &, int &);

// 6

void Rounding(float *);
void Rounding(float &);

// 11

struct Circle
{
    int x;
    int y;
    int r;
};

void Radius(Circle *);
void Radius(Circle &);

// 14

struct Matrix
{
    int a[3][3];
};

void Transposition(Matrix *);
void Transposition(Matrix &);

#endif //LABA_1_REALIZE_H
