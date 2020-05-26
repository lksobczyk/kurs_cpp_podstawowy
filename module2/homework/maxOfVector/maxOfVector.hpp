#pragma once
#include <vector>

int maxOfVector(const std::vector<int> &vec)
{
    if (vec.empty())
    {
        return 0;
    }
    int maxValue = vec.front();
    for (auto &vectorElement : vec)
    {
        if (vectorElement > maxValue)
        {
            maxValue = vectorElement;
        }
    }

    return maxValue;
}

