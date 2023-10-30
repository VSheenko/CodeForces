#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> vec(n, 0);

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        vec[i] = num;
    }

    std::sort(vec.rbegin(), vec.rend());

    int64_t summa = 0;
    for (int i = 1; i <= vec.size(); i++){
        if (i < vec[i-1]){
            summa += vec[i-1] - i;
        }
    }

    std::cout << summa;
}