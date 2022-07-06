#include "../integer.hpp"

#include <vector>

int main() {
    auto set_integers_1 = {1, 2, 3, 4, 5};
    auto set_integers_2 = {5, 5, 5, 5, 5};
    auto set_integers_3 = {-1, 1, -1, 1, -1};
    auto set_integers_4 = {-1, -2, -3, -4, -5};

    if (sum_integers(set_integers_1) != 15) return 1;
    if (sum_integers(set_integers_2) != 25) return 1;
    if (sum_integers(set_integers_3) != -1) return 1;
    if (sum_integers(set_integers_4) != -15) return 1;

    return 0;
}