#pragma once

#include <memory>
#include <vector>

using VectorSPtr = std::vector< std::shared_ptr<int> >;

VectorSPtr generate(int count);
void print(const VectorSPtr& vec);
void add10(VectorSPtr& vec);
void sub10(int* const pItem);
void sub10(VectorSPtr& vec);
