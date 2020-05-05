#include <iostream>

#include "Complex.h"

using namespace std;

int main() {
    Complex c1(2, 3);
    Complex c2(c1);
    Complex c3;
    
    c3 = c2;

    cout << c1 << ": " << c2 << endl;

    return 0;
}