#include <iostream>

int PointCheck(const int& D, const int& X, const int& Y) {
    int dx, dy;

    if (X > 0 && Y > 0) {
        dx = abs(X - D);
        dy = abs(Y - D);
        return dx > dy ? 3 : 2;
    }
    else if (X < 0 && Y > 0) {
        if (Y < D) {
            return D / 2 >= Y ? 1 : 3;
        }
        return 3;
    }
    else if (X < 0 && Y < 0) {
        return 1;
    }
    else {
        if (X < D) {
            return D / 2 >= X ? 1 : 2;
        }
        return 2;
    }
}

int main() {
    int d, x, y;
    std::cin >> d >> x >> y;

    if (d >= x + y && x >= 0 && y >= 0) {
        std::cout << "0";
    }
    else {
        std::cout << PointCheck(d, x, y);
    }

    return 0;
}
