#include <iostream>
#include <cstdint>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int n;
    std::cin >> n;

    int inp;
    int64_t summa = 0;
    for (int i = 1; i <= n; i++) {
        std::cin >> inp;
        summa = inp - summa;
    }

    int q;
    std::cin >> q;
    int l, r, v;
    while (q --> 0) {
        std::cin >> l >> r >> v;

        if ((r - l + 1) % 2 != 0) {
            summa += (l % 2 == n % 2) ? v : -v;
        }
        std::cout << summa << '\n';
    }
}