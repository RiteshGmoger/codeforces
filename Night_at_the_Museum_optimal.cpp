#include <iostream>
#include <string>
#include <cmath>    // abs()

int main() {
    std::string s;
    std::cin >> s;

    char curr = 'a';
    int moves = 0;

    for(char c : s) {
        int dist = abs(c - curr);
        moves += std::min(dist, 26 - dist);
        curr = c;
    }

    std::cout << moves << "\n";
}

