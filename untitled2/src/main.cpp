#include <iostream>
#include "cpu.h"
#include "disk.h"
#include "ram.h"
#include "kbd.h"
#include "gpu.h"

int main() {
    int line;
    while(1) {
        std::cout << "\nEnter command: \n1.SUM\n2.Write\\read.\n3.Display\n4.Input.\n5.Exit\n";
        std::cin >> line;
        if (line == 1) {
            compute(arr);
        }
        if (line == 2) {
            std::cout << "\n1.Write\\2.Read";
            std::cin >> line;
            if (line == 1) {
                load(arr);
            }
            if (line == 2) {
                save(arr);
            }
        }
        if (line == 3) {
            gpu(arr);
        }
        if (line == 4) {
            kbd(arr);
        }
        if(line == 5)
            break;
    }
    return 0;
}
