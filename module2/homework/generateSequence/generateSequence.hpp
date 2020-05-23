#pragma once
#include <vector>
#include <iostream>

std::vector<int> generateSequence(int count, int step)
{
    std::vector<int> vec;
    int sequenceElement = 0;
    for (int i = 0; i < count; ++i)
    {
        vec.push_back(sequenceElement += step);
    }
    for (auto& element : vec) {
        std::cout << element << '\n';
    }

    return {};
}
