#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int> &vec)
{
    int max = vec.front();
    std::cout << max << '\n' << '\n';
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << '\n';
    }
    std::cout << '\n';

    return {};
}
