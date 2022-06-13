#include <iostream>
#include "gpu.h"
void gpu(int *arr) {
    for (int i = 0; i < 8; i++) {
        std::cout << std::endl << *(arr + i);
    }
}