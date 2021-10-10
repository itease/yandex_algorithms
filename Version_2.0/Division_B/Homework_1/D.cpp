#include <iostream>
#include <cmath>

int main() {
    int q;
    std::cin >> q;
    double sum[q];
    for (int i = 0; i < q; ++i) {
        std::cin >> sum[i];
    }

    double average;
    if (q % 2 == 0) {
        average = round((sum[q / 2 - 1] + sum[q / 2]) / 2);
    }
    else {
        average = sum[q / 2];
    }

    int a = average;
    std::cout << a;

    return 0;
}
