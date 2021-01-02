#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


struct Vector {
    int x, y;

    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    Vector(int x1, int y1, int x2, int y2) : x(x2 - x1), y(y2 - y1) {}

    Vector operator+(const Vector &other) const {
        return Vector(x + other.x, y + other.y);
    }

    Vector operator-(const Vector &other) const {
        return Vector(x - other.x, y - other.y);
    }

    int operator*(const Vector &other) const {
        return x * other.x + y * other.y;
    }

    int operator^(const Vector &other) const {
        return x * other.y - y * other.x;
    }

    double len() {
        return sqrt(*this * *this);
    }
};

struct Line {
    int a, b, c;

    Line(int x1, int y1, int x2, int y2) : a(y2 - y1), b(x1 - x2), c(x2 * y1 - x1 * y2) {}
};

ostream &operator<<(ostream &os, const Vector &v) {
    return os << v.x << " " << v.y << "\n";
}

istream &operator>>(istream &is, Vector &v) {
    return is >> v.x >> v.y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}
