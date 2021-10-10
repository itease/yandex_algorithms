#include <iostream>

int main() {
    int n, i, j;
    std::cin >> n >> i >> j;
    if (i > j) {
        int tmp = j;
        j = i;
        i = tmp;
    }
    int q1 = j - i - 1;
    int q2 = n - j + i - 1;
    if (q1 > q2) {
        std::cout << q2;
    } else {
        std::cout << q1;
    }

    return 0;
}
