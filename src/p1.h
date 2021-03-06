//
// Created by rudri on 10/11/2020.
//

#include <algorithm>
#include <iostream>
#include <vector>

#ifndef POO2_PC2_SEC02_V2021_1_P1_H
#define POO2_PC2_SEC02_V2021_1_P1_H

template <template <typename...> class CTemplate, typename CType,
          typename T = typename CType::value_type>
CType join_sort(CTemplate<CType> containers) {
  return CType{};
}
void question_1_1();
void question_1_2();

template <typename T> using MegaVec = std::vector<std::vector<T>>;

template <typename T> std::vector<T> join_sort(MegaVec<T> megacont) {
  std::vector<T> result;

  for (auto cont : megacont) {
    // https://stackoverflow.com/questions/201718/concatenating-two-stdvectors
    result.insert(std::end(result), std::begin(cont), std::end(cont));
  }
  // https://stackoverflow.com/questions/947394/what-is-the-point-of-make-heap
  std::make_heap(begin(result), end(result));
  // std::sort(result.begin(), result.end());
  std::sort_heap(begin(result), end(result));

  return result;
}

#endif // POO2_PC2_SEC02_V2021_1_P1_H
