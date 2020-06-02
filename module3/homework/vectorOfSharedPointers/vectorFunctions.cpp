#include "vectorFunctions.hpp"

#include <iostream>

VectorSPtr generate(int count) {
    VectorSPtr vec;
    vec.reserve(count);

    for (size_t i = 0; i < count; ++i)
    {
        vec.emplace_back(std::make_shared<int>(i));
    }

    return vec;
}

void print(const VectorSPtr& vec) {
    for (const auto& pItem : vec)
    {
        std::cout << *pItem << ' ';
    }
}

void add10(VectorSPtr& vec) {
}

void sub10(int* const pItem) {
}

void sub10(VectorSPtr& vec) {
}
