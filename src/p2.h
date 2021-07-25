//
// Created by rudri on 10/11/2020.
//

#include <algorithm>
#include <map>
#include <vector>

#ifndef POO2_PC2_SEC02_V2021_1_P2_H
#define POO2_PC2_SEC02_V2021_1_P2_H

using namespace std;

template <typename Container> Container focus_values(Container cnt) {
  return Container{};
}

void question_2_1();
void question_2_2();

std::vector<int> focus_values(const std::vector<int> &cont) {
  map<int, int> mapa;

  for (const auto elem : cont) {
    mapa.try_emplace(elem, 0);
  }

  for (auto &elem : mapa) {
    const int veces = count(begin(cont), end(cont), elem);
    elem.second = veces;
  }

  vector<int> result;

  for (const auto elem : mapa) {
    result.push_back(elem.first);
  }

  return result;
}

#endif // POO2_PC2_SEC02_V2021_1_P2_H
