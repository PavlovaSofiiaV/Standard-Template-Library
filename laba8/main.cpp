#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include "Array.h"
#include "Deque.h"
#include "Vector.h"


int main() {
    std::array<int, 3> a = {1, 3, 5};
    std::array<int, 3> b = {2, 4, 6};

    auto merged = mergeArrays(a, b);

    std::cout << "Merged array: ";
    for (auto it = merged.begin(); it != merged.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    std::vector<int> v = {1, 2, 3, 4, 5, 6};
    std::vector<int> even;
    std::vector<int> odd;

    split(v, even, odd);

    std::cout << "Even numbers: ";
    for (auto it = even.begin(); it != even.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\nOdd numbers: ";
    for (auto it = odd.begin(); it != odd.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    std::deque<int> d = {1, 2, 3, 2, 1};
    std::cout << "Deque palindrome check: ";
    if (isPalindrome(d)) {
        std::cout << "Palindrome\n";
    } else {
        std::cout << "Not palindrome\n";
    }

    return 0;
}