#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int> &vec)
{
    int max = vec.front();
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        if (*it > max)
        {
            max = *it;
        }
    }
    std::cout << max << '\n';

    return {};
}
