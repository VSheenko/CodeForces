#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cassert>

int main(){
    std::cout << std::fixed << std::setprecision(9);

    int64_t summa = 0, cnt = 0;
    int n;

    std::cin >> n;
    char chr; int cur_num;
    for (int i = 0; i < n; i++) {
        std::cin >> chr >> cur_num;

        if (chr == '+'){
            summa += cur_num;
            cnt++;
        } else {
            assert(chr == '-');
            summa -= cur_num;
            cnt--;
        }

        std::cout << ((cnt == 0) ? 0 : (summa / (double)cnt)) << '\n';

    }
}