#include <iostream>

#include "demolib1.h"

int demo_lib1_factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * demo_lib1_factorial(n-1);
}
