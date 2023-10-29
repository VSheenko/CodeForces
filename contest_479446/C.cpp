#include <iostream>
#include <cstdint>
#include <cassert>

int main(){
    int n;
    std::cin >> n;

    int64_t res_time = 0;
    int a, b;
    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;

        if (a > res_time) {
            res_time = a + b;
        } else {
            assert(a <= res_time);

            res_time += b;
        }
    }

    std::cout << res_time;
}