//
// Created by User on 30.04.2026.
//

#ifndef LABA8_DEQUE_H
#define LABA8_DEQUE_H

#include <deque>

template<typename T>
bool isPalindrome(const std::deque<T>& d) {
    auto left = d.begin();
    auto right = d.end() - 1;

    while (left < right) {
        if (*left != *right)
            return false;
        ++left;
        --right;
    }
    return true;
}

#endif //LABA8_DEQUE_H