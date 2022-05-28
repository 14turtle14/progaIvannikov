#include <iostream>
#include "realize.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    // 3

    int firstptr, secondptr;
    cout << "������� ������� �����: ";
    cin >> firstptr;
    cout << "������� ������� �����: ";
    cin >> secondptr;
    Changes(&firstptr, &secondptr);
    cout << firstptr << secondptr << endl;

    int first, second;
    cout << "������� ������� �����: ";
    cin >> first;
    cout << "������� ������� �����: ";
    cin >> second;
    Changes(first, second);
    cout << first << second << endl;

    // 6

    float numberptr;
    cout << "������� �����: ";
    cin >> numberptr;
    Rounding(&numberptr);
    cout << numberptr << endl;

    float number;
    cout << "������� �����: ";
    cin >> number;
    Rounding(number);
    cout << number << endl;

    // 11

    Circle a;
    a.x = 10;
    a.y = 10;
    a.r = 10;
    Radius(&a);
    cout << ("������") << " " ;
    cout << a.r << endl;

    Circle b;
    b.x = 10;
    b.y = 10;
    b.r = 10;
    Circle &cRef = b;
    Radius(cRef);
    cout << ("������") << " " ;
    cout << a.r << endl;

    // 14

    Matrix m;
    m.a[0][0] = 1;
    m.a[0][1] = 2;
    m.a[0][2] = 3;
    m.a[1][0] = 4;
    m.a[1][1] = 5;
    m.a[1][2] = 6;
    m.a[2][0] = 7;
    m.a[2][1] = 8;
    m.a[2][2] = 9;
    cout << "���������" << endl;
    cout << "\n";
    cout << m.a[0][0] << " " << m.a[0][1] << " " << m.a[0][2] << endl;
    cout << m.a[1][0] << " " << m.a[1][1] << " " << m.a[1][2] << endl;
    cout << m.a[2][0] << " " << m.a[2][1] << " " << m.a[2][2] << endl;
    cout << "\n";
    Transposition(m);
    cout << m.a[0][0] << " " << m.a[0][1] << " " << m.a[0][2] << endl;
    cout << m.a[1][0] << " " << m.a[1][1] << " " << m.a[1][2] << endl;
    cout << m.a[2][0] << " " << m.a[2][1] << " " << m.a[2][2] << endl;
    cout << "\n";

    cout << "������" << endl;
    cout << "\n";
    Matrix m2;
    m2.a[0][0] = 1;
    m2.a[0][1] = 2;
    m2.a[0][2] = 3;
    m2.a[1][0] = 4;
    m2.a[1][1] = 5;
    m2.a[1][2] = 6;
    m2.a[2][0] = 7;
    m2.a[2][1] = 8;
    m2.a[2][2] = 9;
    cout << m2.a[0][0] << " " << m2.a[0][1] << " " << m2.a[0][2] << endl;
    cout << m2.a[1][0] << " " << m2.a[1][1] << " " << m2.a[1][2] << endl;
    cout << m2.a[2][0] << " " << m2.a[2][1] << " " << m2.a[2][2] << endl;
    cout << "\n";
    Matrix &m3Ref = m2;
    Transposition(m3Ref);
    cout << m2.a[0][0] << " " << m2.a[0][1] << " " << m2.a[0][2] << endl;
    cout << m2.a[1][0] << " " << m2.a[1][1] << " " << m2.a[1][2] << endl;
    cout << m2.a[2][0] << " " << m2.a[2][1] << " " << m2.a[2][2] << endl;
    return 0;

}
