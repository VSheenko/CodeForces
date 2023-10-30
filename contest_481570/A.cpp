#include <iostream>

int main(){
    std::cin.tie(0);
    std::cout.tie(0);

    int s, g;
    std::cin >> s >> g;

    if (s / g != s / (float)g) {
        std::cout << -1;
        return 0;
    }

    for (int i = 1; i < s/g; i++) {
        int j = s/g - i;


        bool a = i % g != 0;
        bool b = j % g != 0;

        if (a || b || g == 1) {
            std::cout << j * g << ' ' << i * g;
            return 0;
        }
    }

    std::cout << -1;
}