#include <algorithm>

int main() {
    std::string input_string;
    std::string input_string_reverse;
    std::cin >> input_string;
    input_string_reverse = input_string;
    std::reverse(input_string_reverse.begin(), input_string_reverse.end());
    int sum = 0;
    for (int i = 0; i < input_string.size() / 2; ++i) {
        if (input_string[i] != input_string_reverse[i]) {
            ++sum;
        }
    }
    std::cout << sum;

    return 0;
}
