#include <cmath>
#include "realize.h"
using namespace std;

// 3

void Changes(int *a, int *b)
{
    *a = *a + *a % *b;
}

void Changes(int &a, int &b)
{
    a = a + a % b;
}

// 6

void Rounding(float *a)
{
    *a = round(*a);
}

void Rounding(float &a)
{
    a = round(a);
}

// 11

void Radius(Circle *a)
{
    a->r = (*a).r - 5;
}

void Radius(Circle &b)
{
    b.r = b.r - 5;
}

// 14

void Transposition(Matrix *m)
{
    int t1, t2, t3;
    t1 = (*m).a[0][1];
    t2 = (*m).a[0][2];
    t3 = (*m).a[1][2];

    (*m).a[1][2] = (*m).a[2][1];
    (*m).a[0][1] = (*m).a[1][0];
    (*m).a[0][2] = (*m).a[2][0];

    (*m).a[1][0] = t1;
    (*m).a[2][0] = t2;
    (*m).a[2][1] = t3;
}

void Transposition(Matrix &m)
{
    int t1, t2, t3;
    t1 = m.a[0][1];
    t2 = m.a[0][2];
    t3 = m.a[1][2];

    m.a[0][1] = m.a[1][0];
    m.a[0][2] = m.a[2][0];
    m.a[1][2] = m.a[2][1];

    m.a[1][0] = t1;
    m.a[2][0] = t2;
    m.a[2][1] = t3;
}
