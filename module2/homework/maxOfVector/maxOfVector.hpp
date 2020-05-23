#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int> &vec)
{
    int max = vec.front();
    for (auto& element : vec)
    {
        if (element > max)
        {
            max = element;
        }
    }
    std::cout << max << '\n';

    return {};
}
