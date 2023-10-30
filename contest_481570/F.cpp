#include <iostream>
#include <vector>
#include <set>

int main(){
    int n;
    std::cin >> n;

    int cur;
    std::set<int> st;
    for (int i = 0; i < n; i++) {
        std::cin >> cur;
        while (cur % 2 == 0) {
            cur /= 2;
        }

        st.insert(cur);
    }

    std::cout << st.size();
}