//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <vector>
#include <algorithm>

#ifndef POO2_PC2_SEC02_V2021_1_P1_H
#define POO2_PC2_SEC02_V2021_1_P1_H

void question_1_1();
void question_1_2();

template <typename T> using MegaVec = std::vector<std::vector<T>>;

template <typename T> MegaVec<T> join_sort(MegaVec<T> megacont) {
  MegaVec<T> result;

  for (auto elem : megacont) {
    result.insert(std::end(result), std::begin(elem), std::end(elem));
  }

  std::make_heap(begin(result),end(result));

  return result;
}

#endif // POO2_PC2_SEC02_V2021_1_P1_H
