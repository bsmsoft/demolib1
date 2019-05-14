#include <iostream>

#include "demolib1.h"

int demo_lib1_fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 0; i < n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return t1;
}
