#include <iostream>
#include "cpu.h"
void compute(int *arr){
    int sum = 0;
    for(int i = 0; i < 8; i++){
        sum += *(arr + i);
    }
    std::cout << "\nSum is: " << sum;
}