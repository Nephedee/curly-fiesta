#include <iostream>
#include "kbd.h"
void kbd (int *arr){
    int temp;
    for(int i = 0; i < 8; i++){
        std::cout << "\n[" << i << "]: ";
        std::cin >> temp;
        *(arr + i) = temp;
    }
}