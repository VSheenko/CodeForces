#include <iostream>
#include <vector>
#include <string>

int main(){
    std::string line;
    std::string line2;
    std::getline(std::cin, line);
    std::getline(std::cin, line2);
    std::vector<bool> s1(line.size(), false);
    std::vector<bool> s2(line.size(), false);

    int len = line.size();
    int type1 = 0; // *#
    int type2 = 0; // ##
    int type3 = 0; // #*

    for (int i = 0; i < line.size(); i++) {
        if (line[i] != '#' && line2[i] == '#') type1 += 1;
        else if (line[i] == '#' && line2[i] == '#') type2 += 1;
        else if (line[i] == '#' && line2[i] != '#') type3 += 1;
    }

    if (type1 != 0 && type2 == 0 && type3 != 0) {
        std::cout << "NO";
        return 0;
    }

    line.clear();
    line2.clear();

    std::cout << "YES" << '\n';
    for (int i = 0; i < type1; i++) {
        line += '.';
        line2 += '#';
    }

    for (int i = 0; i < type2; i++) {
        line += '#';
        line2 += '#';
    }

    for (int i = 0; i < type3; i++) {
        line += '#';
        line2 += '.';
    }

    for (int i = 0; i < len - type1 - type2 - type3; i++) {
        line += '.';
        line2 += '.';
    }

    std::cout << line << '\n' << line2;
}