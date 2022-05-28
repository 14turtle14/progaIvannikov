#include <iostream>
#include "Swap.h"
#include "Array.h"

using namespace std;

int main() {

    int a, b;
    cout << "Enter values: \n";
    cin >> a >> b;
    swap_numb(a, b);
    cout << a << " " << b << endl;


    const int SIZE_ = 3;
    Array<SIZE_,int> arr(SIZE_);
    cout << "fill array" << endl;
    arr.fillArray();
    cout << "Array is :" << endl;
    arr.showArray();
    cout << endl;
    int index;
    cout << "Enter index" << endl;
    cin >> index;
    arr.tryIndex(index);
    return 0;

}