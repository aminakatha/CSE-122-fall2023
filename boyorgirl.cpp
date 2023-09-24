#include <iostream>
#include <string>
#include <set>

int main() {
    std::string username;
    std::cin >> username;

    std::set<char> distinct_chars;


    for (char c : username) {
        distinct_chars.insert(c);
    }

    if (distinct_chars.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}

