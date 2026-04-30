//
// Created by User on 30.04.2026.
//

#ifndef LABA8_VECTOR_H
#define LABA8_VECTOR_H
#include <vector>

template<typename T>
void split(const std::vector<T>& first, std::vector<T>& even, std::vector<T>& odd) {
    for (auto it = first.begin(); it != first.end(); ++it) {
        if (*it % 2 == 0) {
            even.push_back(*it);
        } else {
            odd.push_back(*it);
        }
    }
}

#endif //LABA8_VECTOR_H