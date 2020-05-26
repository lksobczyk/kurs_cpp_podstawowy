#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step)
{
    std::vector<int> vec;
    vec.reserve(count);
    int sequenceElement = 0;
    for (int i = 0; i < count; ++i)
    {
        vec.push_back(sequenceElement += step);
    }

    return vec;
}

