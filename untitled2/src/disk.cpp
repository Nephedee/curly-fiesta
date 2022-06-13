#include <fstream>
#include <iostream>
#include "disk.h"
void load(int *arr){
    std::ofstream file;
    file.open("data.txt");
    for(int i = 0; i < 8; i++){
        file << *(arr + i) << std::endl;
    }
    file.close();
}

void save(int *arr){
    std::ifstream file;
    file.open("data.txt");
    for(int i = 0; i < 8; i++){
        file >> *(arr + i);
    }
    file.close();
}