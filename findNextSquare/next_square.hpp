#pragma once
#include <cmath>
#include "next_square.hpp"

long int findNextSquare(long int sq) {
    long double number = std::sqrt(sq);
    if (number == int(number)) {
        return (number + 1) * (number + 1);
    }
    return -1;
}
