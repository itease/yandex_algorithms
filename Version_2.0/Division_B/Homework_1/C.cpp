#include <iostream>

bool FormatCheck(int x, int y, int z) {
    int answer = 1;

    if (x == y) {
        answer = 1;
    }
    else if ((x == 12 && y < 12) || (x < 12 && y == 12) || (x < 12 && y < 12)) {
        answer = 0;
    }

    return answer;
}

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;
    std::cout << FormatCheck(x, y, z);

    return 0;
}
