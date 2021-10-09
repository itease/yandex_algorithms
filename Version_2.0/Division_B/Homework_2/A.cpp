#include <iostream>

int main() {
    int n;
    int n_new;
    int max_n_count = 0; // max element's quantity
    while (std::cin >> n_new && n_new != 0) {
        if (n_new > n) {
            n = n_new;
            max_n_count = 1;
        } else if (n_new == n) {
            ++max_n_count;
        }
    }
    std::cout << max_n_count;

    return 0;
}
