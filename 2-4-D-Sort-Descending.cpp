#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s;
    std::vector<std::string> vs;
    while (getline(std::cin, s) && !s.empty()) {
        vs.push_back(s);
    }
    sort(vs.rbegin(), vs.rend());
    for (auto v : vs) {
        std::cout << v << std::endl;
    }
}