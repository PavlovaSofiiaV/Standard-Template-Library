//
// Created by User on 29.04.2026.
//

#ifndef LABA8_ARRAY_H
#define LABA8_ARRAY_H

#include <iostream>
#include <array>


template<typename T, size_t N, size_t M>
std::array<T, N + M> mergeArrays(const std::array<T, N>& a, const std::array<T, M>& b) {
    std::array<T, N + M> result;

    auto itA = a.begin();
    auto itB = b.begin();
    auto itR = result.begin();
    auto endA = a.end();
    auto endB = b.end();

    while (itA != endA && itB != endB) {
        if (*itA < *itB) {
            *itR = *itA;
            ++itA;
        } else {
            *itR = *itB;
            ++itB;
        }
        ++itR;
    }
    while (itA != endA) {
        *itR = *itA;
        ++itA;
        ++itR;
    }
    while (itB != endB) {
        *itR = *itB;
        ++itB;
        ++itR;
    }
    return result;
}

#endif //LABA8_ARRAY_H