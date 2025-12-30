#include <iostream>

int main() {
    long count = 1;
    double e_approx = 1;
    double factoral_num = 1;
    while (true) {
        if (count >= 4294967294) { // Highest possible value that can be stored in long
            break;
        }
        factoral_num *= count;
        e_approx += 1 / factoral_num;
        count++;
        std
    }
    std::cout << e_approx << std::endl;
    return 0;
}
