#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> street_house;
    std::vector<int> street_shop;
    std::vector<int> s;
    for (int i = 0; i < 10; ++i) {
        int house_type;
        std::cin >> house_type;
        if (house_type == 1) {
            street_house.push_back(i);
        } else if (house_type == 2) {
            street_shop.push_back(i);
        }
    }
    for (int i : street_house) {
        int min_s = abs(i - street_shop[0]);
        for (int j : street_shop) {
            if (abs(i - j) < min_s) {
                min_s = abs(i - j);
            }
        }
        s.push_back(min_s);
    }
    std::sort(std::begin(s), std::end(s));

    std::cout << s[s.size() - 1];
    return 0;
}
