#include <iostream>
#include <cstdint>

int main () {
    int n;
    std::cin >> n;

    int64_t cur = 0;
    int64_t inp = 0;
    int64_t minim = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> inp;
        cur += inp;

        if (cur < 0) minim = std::min(minim, cur);    
    }

    std::cout << std::abs(minim);
}